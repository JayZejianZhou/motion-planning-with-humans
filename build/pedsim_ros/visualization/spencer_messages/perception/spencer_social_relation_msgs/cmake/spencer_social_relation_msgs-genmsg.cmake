# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "spencer_social_relation_msgs: 4 messages, 0 services")

set(MSG_I_FLAGS "-Ispencer_social_relation_msgs:/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg;-Inav_msgs:/opt/ros/indigo/share/nav_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/indigo/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(spencer_social_relation_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg" NAME_WE)
add_custom_target(_spencer_social_relation_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "spencer_social_relation_msgs" "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg" ""
)

get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelations.msg" NAME_WE)
add_custom_target(_spencer_social_relation_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "spencer_social_relation_msgs" "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelations.msg" "spencer_social_relation_msgs/SocialRelation:std_msgs/Header"
)

get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivities.msg" NAME_WE)
add_custom_target(_spencer_social_relation_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "spencer_social_relation_msgs" "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivities.msg" "std_msgs/Header:spencer_social_relation_msgs/SocialActivity"
)

get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg" NAME_WE)
add_custom_target(_spencer_social_relation_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "spencer_social_relation_msgs" "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_cpp(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelations.msg"
  "${MSG_I_FLAGS}"
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_cpp(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivities.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_cpp(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spencer_social_relation_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(spencer_social_relation_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spencer_social_relation_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(spencer_social_relation_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(spencer_social_relation_msgs_generate_messages spencer_social_relation_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_cpp _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelations.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_cpp _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivities.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_cpp _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_cpp _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(spencer_social_relation_msgs_gencpp)
add_dependencies(spencer_social_relation_msgs_gencpp spencer_social_relation_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS spencer_social_relation_msgs_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_lisp(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelations.msg"
  "${MSG_I_FLAGS}"
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_lisp(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivities.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_lisp(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spencer_social_relation_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(spencer_social_relation_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spencer_social_relation_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(spencer_social_relation_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(spencer_social_relation_msgs_generate_messages spencer_social_relation_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_lisp _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelations.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_lisp _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivities.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_lisp _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_lisp _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(spencer_social_relation_msgs_genlisp)
add_dependencies(spencer_social_relation_msgs_genlisp spencer_social_relation_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS spencer_social_relation_msgs_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_py(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelations.msg"
  "${MSG_I_FLAGS}"
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_py(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivities.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spencer_social_relation_msgs
)
_generate_msg_py(spencer_social_relation_msgs
  "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spencer_social_relation_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(spencer_social_relation_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spencer_social_relation_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(spencer_social_relation_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(spencer_social_relation_msgs_generate_messages spencer_social_relation_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivity.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_py _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelations.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_py _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialActivities.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_py _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_social_relation_msgs/msg/SocialRelation.msg" NAME_WE)
add_dependencies(spencer_social_relation_msgs_generate_messages_py _spencer_social_relation_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(spencer_social_relation_msgs_genpy)
add_dependencies(spencer_social_relation_msgs_genpy spencer_social_relation_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS spencer_social_relation_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spencer_social_relation_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spencer_social_relation_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(spencer_social_relation_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
add_dependencies(spencer_social_relation_msgs_generate_messages_cpp sensor_msgs_generate_messages_cpp)
add_dependencies(spencer_social_relation_msgs_generate_messages_cpp nav_msgs_generate_messages_cpp)
add_dependencies(spencer_social_relation_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spencer_social_relation_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spencer_social_relation_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(spencer_social_relation_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
add_dependencies(spencer_social_relation_msgs_generate_messages_lisp sensor_msgs_generate_messages_lisp)
add_dependencies(spencer_social_relation_msgs_generate_messages_lisp nav_msgs_generate_messages_lisp)
add_dependencies(spencer_social_relation_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spencer_social_relation_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spencer_social_relation_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spencer_social_relation_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(spencer_social_relation_msgs_generate_messages_py geometry_msgs_generate_messages_py)
add_dependencies(spencer_social_relation_msgs_generate_messages_py sensor_msgs_generate_messages_py)
add_dependencies(spencer_social_relation_msgs_generate_messages_py nav_msgs_generate_messages_py)
add_dependencies(spencer_social_relation_msgs_generate_messages_py std_msgs_generate_messages_py)
