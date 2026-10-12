
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to my_interfaces__action__CountUp_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_Goal {
    /// Goal
    /// 목표 수
    pub target: i32,

}



impl Default for CountUp_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CountUp_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for CountUp_Goal {
  type RmwMsg = super::action::rmw::CountUp_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target: msg.target,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target: msg.target,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target: msg.target,
    }
  }
}


// Corresponds to my_interfaces__action__CountUp_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_Result {
    /// 지금까지 센 수
    pub sequence: Vec<i32>,

}



impl Default for CountUp_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CountUp_Result::default())
  }
}

impl rosidl_runtime_rs::Message for CountUp_Result {
  type RmwMsg = super::action::rmw::CountUp_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sequence: msg.sequence.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sequence: msg.sequence.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sequence: msg.sequence.into(),
    }
  }
}


// Corresponds to my_interfaces__action__CountUp_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_Feedback {
    /// 현재 센 수
    pub current: i32,

}



impl Default for CountUp_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CountUp_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for CountUp_Feedback {
  type RmwMsg = super::action::rmw::CountUp_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current: msg.current,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current: msg.current,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current: msg.current,
    }
  }
}


// Corresponds to my_interfaces__action__CountUp_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::CountUp_Feedback,

}



impl Default for CountUp_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CountUp_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for CountUp_FeedbackMessage {
  type RmwMsg = super::action::rmw::CountUp_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::CountUp_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::CountUp_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::CountUp_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to my_interfaces__action__CountUp_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::CountUp_Goal,

}



impl Default for CountUp_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CountUp_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CountUp_SendGoal_Request {
  type RmwMsg = super::action::rmw::CountUp_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::CountUp_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::CountUp_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::CountUp_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to my_interfaces__action__CountUp_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for CountUp_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CountUp_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CountUp_SendGoal_Response {
  type RmwMsg = super::action::rmw::CountUp_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to my_interfaces__action__CountUp_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for CountUp_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CountUp_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CountUp_GetResult_Request {
  type RmwMsg = super::action::rmw::CountUp_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to my_interfaces__action__CountUp_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::CountUp_Result,

}



impl Default for CountUp_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CountUp_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CountUp_GetResult_Response {
  type RmwMsg = super::action::rmw::CountUp_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::CountUp_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::CountUp_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::CountUp_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__CountUp_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__CountUp_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct CountUp_SendGoal;

impl rosidl_runtime_rs::Service for CountUp_SendGoal {
    type Request = CountUp_SendGoal_Request;
    type Response = CountUp_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__CountUp_SendGoal() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__CountUp_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__CountUp_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct CountUp_GetResult;

impl rosidl_runtime_rs::Service for CountUp_GetResult {
    type Request = CountUp_GetResult_Request;
    type Response = CountUp_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__CountUp_GetResult() }
    }
}






#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__my_interfaces__action__CountUp() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__CountUp
#[allow(missing_docs, non_camel_case_types)]
pub struct CountUp;

impl rosidl_runtime_rs::Action for CountUp {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = CountUp_Goal;

  /// The result message defined in the action definition.
  type Result = CountUp_Result;

  /// The feedback message defined in the action definition.
  type Feedback = CountUp_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::CountUp_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::CountUp_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::CountUp_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__my_interfaces__action__CountUp() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::CountUp_Goal,
  ) -> super::action::rmw::CountUp_SendGoal_Request {
   super::action::rmw::CountUp_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::CountUp_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::CountUp_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::CountUp_SendGoal_Response {
   super::action::rmw::CountUp_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::CountUp_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::CountUp_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::CountUp_Feedback,
  ) -> super::action::rmw::CountUp_FeedbackMessage {
    let mut message = super::action::rmw::CountUp_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::CountUp_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::CountUp_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::CountUp_GetResult_Request {
   super::action::rmw::CountUp_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::CountUp_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::CountUp_Result,
  ) -> super::action::rmw::CountUp_GetResult_Response {
   super::action::rmw::CountUp_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::CountUp_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::CountUp_Result,
  ) {
    (response.status, response.result)
  }
}


