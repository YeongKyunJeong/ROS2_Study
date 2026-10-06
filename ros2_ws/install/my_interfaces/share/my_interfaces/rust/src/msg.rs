#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to my_interfaces__msg__TurtleGoal
/// my_interfaces/msg/TurtleGoal.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurtleGoal {
    /// 파일 제목은 파스칼 케이스로(첫 글자 대문자)
    /// 타입 이름
    /// 변수명은 스네이크 케이스로
    /// 거북이 이름
    pub turtle_name: std::string::String,

    /// float64 x                       # 목표의 x 좌표
    /// float64 y                       # 목표의 y 좌표
    /// ← 표준 좌표 타입을 칸으로
    pub goal_point: geometry_msgs::msg::Point,

    /// 이동 속도
    pub speed: f64,

}



impl Default for TurtleGoal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TurtleGoal::default())
  }
}

impl rosidl_runtime_rs::Message for TurtleGoal {
  type RmwMsg = super::msg::rmw::TurtleGoal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        turtle_name: msg.turtle_name.as_str().into(),
        goal_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.goal_point)).into_owned(),
        speed: msg.speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        turtle_name: msg.turtle_name.as_str().into(),
        goal_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_point)).into_owned(),
      speed: msg.speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      turtle_name: msg.turtle_name.to_string(),
      goal_point: geometry_msgs::msg::Point::from_rmw_message(msg.goal_point),
      speed: msg.speed,
    }
  }
}


// Corresponds to my_interfaces__msg__RobotState
/// my_interfaces/msg/RobotState.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotState {
    /// 필드 : 지금 상태 (위 코드 중 하나가 담김)
    pub current_state: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_state: sensor_msgs::msg::BatteryState,

}

impl RobotState {
    /// 상수 : 대기 상태를 뜻하는 코드
    pub const STATE_IDLE: i8 = 0;

    /// 상수 : 이동 중을 뜻하는 코드
    pub const STATE_MOVING: i8 = 1;

    /// 상수 : 오류 상태를 뜻하는 코드
    pub const STATE_ERROR: i8 = 2;

}


impl Default for RobotState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotState::default())
  }
}

impl rosidl_runtime_rs::Message for RobotState {
  type RmwMsg = super::msg::rmw::RobotState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_state: msg.current_state,
        battery_state: sensor_msgs::msg::BatteryState::into_rmw_message(std::borrow::Cow::Owned(msg.battery_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_state: msg.current_state,
        battery_state: sensor_msgs::msg::BatteryState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.battery_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_state: msg.current_state,
      battery_state: sensor_msgs::msg::BatteryState::from_rmw_message(msg.battery_state),
    }
  }
}


