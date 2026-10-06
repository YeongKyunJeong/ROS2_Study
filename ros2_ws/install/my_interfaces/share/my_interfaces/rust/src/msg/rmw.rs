#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__msg__TurtleGoal() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__msg__TurtleGoal__init(msg: *mut TurtleGoal) -> bool;
    fn my_interfaces__msg__TurtleGoal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TurtleGoal>, size: usize) -> bool;
    fn my_interfaces__msg__TurtleGoal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TurtleGoal>);
    fn my_interfaces__msg__TurtleGoal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TurtleGoal>, out_seq: *mut rosidl_runtime_rs::Sequence<TurtleGoal>) -> bool;
}

// Corresponds to my_interfaces__msg__TurtleGoal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// my_interfaces/msg/TurtleGoal.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurtleGoal {
    /// 파일 제목은 파스칼 케이스로(첫 글자 대문자)
    /// 타입 이름
    /// 변수명은 스네이크 케이스로
    /// 거북이 이름
    pub turtle_name: rosidl_runtime_rs::String,

    /// float64 x                       # 목표의 x 좌표
    /// float64 y                       # 목표의 y 좌표
    /// ← 표준 좌표 타입을 칸으로
    pub goal_point: geometry_msgs::msg::rmw::Point,

    /// 이동 속도
    pub speed: f64,

}



impl Default for TurtleGoal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__msg__TurtleGoal__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__msg__TurtleGoal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TurtleGoal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__msg__TurtleGoal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__msg__TurtleGoal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__msg__TurtleGoal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TurtleGoal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TurtleGoal where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/msg/TurtleGoal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__msg__TurtleGoal() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__msg__RobotState() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__msg__RobotState__init(msg: *mut RobotState) -> bool;
    fn my_interfaces__msg__RobotState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotState>, size: usize) -> bool;
    fn my_interfaces__msg__RobotState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotState>);
    fn my_interfaces__msg__RobotState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotState>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotState>) -> bool;
}

// Corresponds to my_interfaces__msg__RobotState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// my_interfaces/msg/RobotState.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotState {
    /// 필드 : 지금 상태 (위 코드 중 하나가 담김)
    pub current_state: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_state: sensor_msgs::msg::rmw::BatteryState,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__msg__RobotState__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__msg__RobotState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__msg__RobotState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__msg__RobotState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__msg__RobotState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotState where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/msg/RobotState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__msg__RobotState() }
  }
}


