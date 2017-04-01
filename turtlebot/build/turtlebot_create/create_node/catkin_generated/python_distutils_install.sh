#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/turtlebot/ese_team_project/turtlebot/src/turtlebot_create/create_node"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/turtlebot/ese_team_project/turtlebot/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/turtlebot/ese_team_project/turtlebot/install/lib/python2.7/dist-packages:/home/turtlebot/ese_team_project/turtlebot/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/turtlebot/ese_team_project/turtlebot/build" \
    "/usr/bin/python" \
    "/home/turtlebot/ese_team_project/turtlebot/src/turtlebot_create/create_node/setup.py" \
    build --build-base "/home/turtlebot/ese_team_project/turtlebot/build/turtlebot_create/create_node" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/turtlebot/ese_team_project/turtlebot/install" --install-scripts="/home/turtlebot/ese_team_project/turtlebot/install/bin"
