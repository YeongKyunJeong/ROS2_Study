# my_interfaces/action/DiggingMachineState.action

# Goal

float64 target_depth
float64 target_radius
---

# Result

bool done
float64 removed_soil_weight
---

# Feedback

float64 now_depth
float64 carrying_weight
float64 digging_depth
bool is_digging
bool is_moving
bool is_carrying
