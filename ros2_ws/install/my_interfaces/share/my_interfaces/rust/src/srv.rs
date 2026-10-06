#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to my_interfaces__srv__AddThreeInts_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddThreeInts_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub c: i64,

}



impl Default for AddThreeInts_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AddThreeInts_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AddThreeInts_Request {
  type RmwMsg = super::srv::rmw::AddThreeInts_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        a: msg.a,
        b: msg.b,
        c: msg.c,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      a: msg.a,
      b: msg.b,
      c: msg.c,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      a: msg.a,
      b: msg.b,
      c: msg.c,
    }
  }
}


// Corresponds to my_interfaces__srv__AddThreeInts_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddThreeInts_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i64,

}



impl Default for AddThreeInts_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AddThreeInts_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AddThreeInts_Response {
  type RmwMsg = super::srv::rmw::AddThreeInts_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sum: msg.sum,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sum: msg.sum,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sum: msg.sum,
    }
  }
}


// Corresponds to my_interfaces__srv__SetTurtleName_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTurtleName_Request {
    /// 새로 붙일 이름
    pub new_name: std::string::String,

}



impl Default for SetTurtleName_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetTurtleName_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetTurtleName_Request {
  type RmwMsg = super::srv::rmw::SetTurtleName_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        new_name: msg.new_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        new_name: msg.new_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      new_name: msg.new_name.to_string(),
    }
  }
}


// Corresponds to my_interfaces__srv__SetTurtleName_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTurtleName_Response {
    /// 응답 : 성공 여부
    pub success: bool,

    /// 응답 : 사람이 읽을 안내문
    pub message: std::string::String,

}



impl Default for SetTurtleName_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetTurtleName_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetTurtleName_Response {
  type RmwMsg = super::srv::rmw::SetTurtleName_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__AddThreeInts() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__AddThreeInts
#[allow(missing_docs, non_camel_case_types)]
pub struct AddThreeInts;

impl rosidl_runtime_rs::Service for AddThreeInts {
    type Request = AddThreeInts_Request;
    type Response = AddThreeInts_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__AddThreeInts() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__SetTurtleName() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__SetTurtleName
#[allow(missing_docs, non_camel_case_types)]
pub struct SetTurtleName;

impl rosidl_runtime_rs::Service for SetTurtleName {
    type Request = SetTurtleName_Request;
    type Response = SetTurtleName_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__SetTurtleName() }
    }
}


