execute_process(COMMAND "/home/turtlebot/ese_team_project/rocon/build/rocon_qt_gui/concert_qt_map_annotation/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/turtlebot/ese_team_project/rocon/build/rocon_qt_gui/concert_qt_map_annotation/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
