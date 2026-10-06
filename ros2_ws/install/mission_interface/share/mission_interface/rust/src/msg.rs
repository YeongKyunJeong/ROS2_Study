#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mission_interface__msg__Mission
/// mission_interface/Mission.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mission {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl Mission {
    /// 진행 상태 코드
    pub const MISSION_WORKING_STATE: i64 = 0;

    /// 성공 상태 코드
    pub const MISSION_SUCCESS_STATE: i64 = 1;

    /// 실패 상태 코드
    pub const MISSION_FAIL_STATE: i64 = 2;

}


impl Default for Mission {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Mission::default())
  }
}

impl rosidl_runtime_rs::Message for Mission {
  type RmwMsg = super::msg::rmw::Mission;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


