#!/usr/bin/env bash
# 설정을 바꾸지 않고 환경과 ROS 그래프를 수집한다. 오류도 관측 자료로 남긴다.
set -u
date -Is
uname -sr
if [[ -r /etc/os-release ]]; then cat /etc/os-release; fi
for key in ROS_DISTRO ROS_VERSION ROS_DOMAIN_ID RMW_IMPLEMENTATION ROS_LOCALHOST_ONLY ROS_AUTOMATIC_DISCOVERY_RANGE; do
    printf '%s=%s\n' "$key" "${!key-<unset>}"
done
for tool in ros2 timeout; do
    command -v "$tool" || { printf '필수 명령 없음: %s\n' "$tool"; exit 1; }
done

# 지원 옵션을 확인하여 daemon을 시작하지 않고 각 조회를 최대 10초로 제한한다.
for kind in node topic; do
    printf '\n[ros2 %s list]\n' "$kind"
    help=$(ros2 "$kind" list --help 2>&1)
    if [[ $? -ne 0 || "$help" != *"--no-daemon"* ]]; then
        printf '확인 불가: --no-daemon 지원 확인 실패\n%s\n' "$help"
        continue
    fi
    args=(--no-daemon --spin-time 2)
    if [[ "$kind" == topic ]]; then args+=(-t); fi
    timeout -k 2s 10s ros2 "$kind" list "${args[@]}" 2>&1
    printf 'exit_code=%s\n' "$?"
done
