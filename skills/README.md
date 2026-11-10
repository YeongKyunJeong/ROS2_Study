# 조사·기록·글쓰기 스킬

이 저장소에서 재사용·공유하는 세 가지 스킬이다. 각 `SKILL.md`는 독립적으로 사용할 수 있다.

| 스킬 | 용도 | 결과 |
|---|---|---|
| [troubleshooting-log](troubleshooting-log/SKILL.md) | 오류와 해결·검증 이력 정리 | `docs/troubleshooting.md` |
| [evidence-research](evidence-research/SKILL.md) | 기술·현안 근거 조사 | 조사 메모 |
| [draft-based-writing](draft-based-writing/SKILL.md) | 사용자 직접 작성 초안 편집 | 원본을 보존한 공개용 Markdown |

## 사용

현재 `skills/`는 공유용 소스 위치이며 자동 검색 경로에 설치한 상태는 아니다. 다음처럼 파일을 지정해서 사용할 수 있다.

```text
skills/evidence-research/SKILL.md를 읽고 실내 주행용 SLAM 후보를 조사해줘.
skills/draft-based-writing/SKILL.md를 읽고 내가 직접 작성한 아래 초안을 정리해줘: …
skills/troubleshooting-log/SKILL.md를 읽고 이번 오류와 수정 내역을 기록해줘.
```

자동 검색이 필요하면 쓰기가 허용된 환경에서 각 스킬 폴더를 프로젝트의 `.agents/skills/` 또는 개인의 `$CODEX_HOME/skills`(미설정이면 `~/.codex/skills`)에 복사한다. 설치 후 검색 여부는 해당 환경에서 확인한다.

권장 흐름은 조사 메모 작성 → 사용자가 직접 초안 작성 → 초안 기반 편집이다. 문제 해결 기록은 이 흐름과 독립적으로 사용한다. 파일 생성이 GitHub 게시를 뜻하지 않는다.

## 검증과 포트폴리오

[평가 사례](evaluation.md)는 재실행 가능한 수동 시나리오다. 실제 입력·출력, 소요 시간, 수정 횟수와 실패 사례를 남겨 개선한다. 측정하지 않은 효과를 성과로 기재하지 않는다.
