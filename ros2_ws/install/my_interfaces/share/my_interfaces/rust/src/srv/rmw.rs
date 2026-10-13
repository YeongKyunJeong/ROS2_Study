#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__AddThreeInts_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__AddThreeInts_Request__init(msg: *mut AddThreeInts_Request) -> bool;
    fn my_interfaces__srv__AddThreeInts_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Request>, size: usize) -> bool;
    fn my_interfaces__srv__AddThreeInts_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Request>);
    fn my_interfaces__srv__AddThreeInts_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddThreeInts_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Request>) -> bool;
}

// Corresponds to my_interfaces__srv__AddThreeInts_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__AddThreeInts_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__AddThreeInts_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddThreeInts_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddThreeInts_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddThreeInts_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/AddThreeInts_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__AddThreeInts_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__AddThreeInts_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__AddThreeInts_Response__init(msg: *mut AddThreeInts_Response) -> bool;
    fn my_interfaces__srv__AddThreeInts_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Response>, size: usize) -> bool;
    fn my_interfaces__srv__AddThreeInts_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Response>);
    fn my_interfaces__srv__AddThreeInts_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddThreeInts_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Response>) -> bool;
}

// Corresponds to my_interfaces__srv__AddThreeInts_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddThreeInts_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i64,

}



impl Default for AddThreeInts_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__AddThreeInts_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__AddThreeInts_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddThreeInts_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddThreeInts_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddThreeInts_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/AddThreeInts_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__AddThreeInts_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetTurtleName_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__SetTurtleName_Request__init(msg: *mut SetTurtleName_Request) -> bool;
    fn my_interfaces__srv__SetTurtleName_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Request>, size: usize) -> bool;
    fn my_interfaces__srv__SetTurtleName_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Request>);
    fn my_interfaces__srv__SetTurtleName_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTurtleName_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Request>) -> bool;
}

// Corresponds to my_interfaces__srv__SetTurtleName_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTurtleName_Request {
    /// 새로 붙일 이름
    pub new_name: rosidl_runtime_rs::String,

}



impl Default for SetTurtleName_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__SetTurtleName_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__SetTurtleName_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTurtleName_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTurtleName_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTurtleName_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/SetTurtleName_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetTurtleName_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetTurtleName_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__SetTurtleName_Response__init(msg: *mut SetTurtleName_Response) -> bool;
    fn my_interfaces__srv__SetTurtleName_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Response>, size: usize) -> bool;
    fn my_interfaces__srv__SetTurtleName_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Response>);
    fn my_interfaces__srv__SetTurtleName_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTurtleName_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Response>) -> bool;
}

// Corresponds to my_interfaces__srv__SetTurtleName_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTurtleName_Response {
    /// 응답 : 성공 여부
    pub success: bool,

    /// 응답 : 사람이 읽을 안내문
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetTurtleName_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__SetTurtleName_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__SetTurtleName_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTurtleName_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTurtleName_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTurtleName_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/SetTurtleName_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetTurtleName_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__Calc_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__Calc_Request__init(msg: *mut Calc_Request) -> bool;
    fn my_interfaces__srv__Calc_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Calc_Request>, size: usize) -> bool;
    fn my_interfaces__srv__Calc_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Calc_Request>);
    fn my_interfaces__srv__Calc_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Calc_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Calc_Request>) -> bool;
}

// Corresponds to my_interfaces__srv__Calc_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub op: rosidl_runtime_rs::String,

}



impl Default for Calc_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__Calc_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__Calc_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Calc_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Calc_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Calc_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Calc_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Calc_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Calc_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/Calc_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__Calc_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__Calc_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__Calc_Response__init(msg: *mut Calc_Response) -> bool;
    fn my_interfaces__srv__Calc_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Calc_Response>, size: usize) -> bool;
    fn my_interfaces__srv__Calc_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Calc_Response>);
    fn my_interfaces__srv__Calc_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Calc_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Calc_Response>) -> bool;
}

// Corresponds to my_interfaces__srv__Calc_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__Calc_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__Calc_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Calc_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Calc_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Calc_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__Calc_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Calc_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Calc_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/Calc_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__Calc_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__ArithmeticOperator_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__ArithmeticOperator_Request__init(msg: *mut ArithmeticOperator_Request) -> bool;
    fn my_interfaces__srv__ArithmeticOperator_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticOperator_Request>, size: usize) -> bool;
    fn my_interfaces__srv__ArithmeticOperator_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticOperator_Request>);
    fn my_interfaces__srv__ArithmeticOperator_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticOperator_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticOperator_Request>) -> bool;
}

// Corresponds to my_interfaces__srv__ArithmeticOperator_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__ArithmeticOperator_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__ArithmeticOperator_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticOperator_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__ArithmeticOperator_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__ArithmeticOperator_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__ArithmeticOperator_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticOperator_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticOperator_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/ArithmeticOperator_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__ArithmeticOperator_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__ArithmeticOperator_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__ArithmeticOperator_Response__init(msg: *mut ArithmeticOperator_Response) -> bool;
    fn my_interfaces__srv__ArithmeticOperator_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticOperator_Response>, size: usize) -> bool;
    fn my_interfaces__srv__ArithmeticOperator_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticOperator_Response>);
    fn my_interfaces__srv__ArithmeticOperator_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticOperator_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticOperator_Response>) -> bool;
}

// Corresponds to my_interfaces__srv__ArithmeticOperator_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticOperator_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub arithmetic_result: f32,

}



impl Default for ArithmeticOperator_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__ArithmeticOperator_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__ArithmeticOperator_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticOperator_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__ArithmeticOperator_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__ArithmeticOperator_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__ArithmeticOperator_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticOperator_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticOperator_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/ArithmeticOperator_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__ArithmeticOperator_Response() }
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


