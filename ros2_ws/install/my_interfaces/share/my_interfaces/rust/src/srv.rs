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


// Corresponds to my_interfaces__srv__Calc_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Calc_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub op: std::string::String,

}



impl Default for Calc_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Calc_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Calc_Request {
  type RmwMsg = super::srv::rmw::Calc_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        a: msg.a,
        b: msg.b,
        op: msg.op.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      a: msg.a,
      b: msg.b,
        op: msg.op.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      a: msg.a,
      b: msg.b,
      op: msg.op.to_string(),
    }
  }
}


// Corresponds to my_interfaces__srv__Calc_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Calc_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ok: bool,

}



impl Default for Calc_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Calc_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Calc_Response {
  type RmwMsg = super::srv::rmw::Calc_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
        ok: msg.ok,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      ok: msg.ok,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
      ok: msg.ok,
    }
  }
}


// Corresponds to my_interfaces__srv__ArithmeticOperator_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticOperator_Request {
    /// 실제 전달될 필드
    pub arithmetic_operator: i8,

}

impl ArithmeticOperator_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLUS: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MINUS: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MULTIPLY: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DIVISION: i8 = 4;

}


impl Default for ArithmeticOperator_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArithmeticOperator_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ArithmeticOperator_Request {
  type RmwMsg = super::srv::rmw::ArithmeticOperator_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        arithmetic_operator: msg.arithmetic_operator,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      arithmetic_operator: msg.arithmetic_operator,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      arithmetic_operator: msg.arithmetic_operator,
    }
  }
}


// Corresponds to my_interfaces__srv__ArithmeticOperator_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticOperator_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub arithmetic_result: f32,

}



impl Default for ArithmeticOperator_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArithmeticOperator_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ArithmeticOperator_Response {
  type RmwMsg = super::srv::rmw::ArithmeticOperator_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        arithmetic_result: msg.arithmetic_result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      arithmetic_result: msg.arithmetic_result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      arithmetic_result: msg.arithmetic_result,
    }
  }
}


// Corresponds to my_interfaces__srv__RoundGuess_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoundGuess_Request {
    /// 예측 문자
    pub letter: std::string::String,

}



impl Default for RoundGuess_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RoundGuess_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RoundGuess_Request {
  type RmwMsg = super::srv::rmw::RoundGuess_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        letter: msg.letter.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        letter: msg.letter.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      letter: msg.letter.to_string(),
    }
  }
}


// Corresponds to my_interfaces__srv__RoundGuess_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoundGuess_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub correct: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub done: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub board: std::string::String,

}



impl Default for RoundGuess_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RoundGuess_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RoundGuess_Response {
  type RmwMsg = super::srv::rmw::RoundGuess_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        correct: msg.correct,
        done: msg.done,
        board: msg.board.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      correct: msg.correct,
      done: msg.done,
        board: msg.board.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      correct: msg.correct,
      done: msg.done,
      board: msg.board.to_string(),
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




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__Calc() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__Calc
#[allow(missing_docs, non_camel_case_types)]
pub struct Calc;

impl rosidl_runtime_rs::Service for Calc {
    type Request = Calc_Request;
    type Response = Calc_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__Calc() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__ArithmeticOperator() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__ArithmeticOperator
#[allow(missing_docs, non_camel_case_types)]
pub struct ArithmeticOperator;

impl rosidl_runtime_rs::Service for ArithmeticOperator {
    type Request = ArithmeticOperator_Request;
    type Response = ArithmeticOperator_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__ArithmeticOperator() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__RoundGuess() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__RoundGuess
#[allow(missing_docs, non_camel_case_types)]
pub struct RoundGuess;

impl rosidl_runtime_rs::Service for RoundGuess {
    type Request = RoundGuess_Request;
    type Response = RoundGuess_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__RoundGuess() }
    }
}


