
# PID Controller
---
This project is an implementation of PID controller to control a self driving car around track in simulator. The simulator feed the system with the cross track error `cte` to compute steering angle along the track.

## PID 
PID is a closed loop feedback controller that calculate the output signal based on the difference between current state of the object and desired state.


* P(proportional): the steering angle value is calculated proportional to the cross track error(cte) that represent the offset between the car and center of the lane. By using P controller only the vehicle will overshoot to the desired point.
* D(integral): to avoid overshooting and decrease output steering angle the derivative term repose is proportional to the rate of change of the `cte` which will increase the controller responds. However by using PD controller the vehicle wiggles along the track that might caused by the vehicle drift.

* I(derivative): integral component added in order to compensate the vehicle drift as it handle any small error to increase slowly by summing the error over time.

## System Tuning
I tuned the PID controller by setting D &I terms to zero and start to tune P until I found the car drive itself to 15% of the track with high osculation. then I added term D and I increased to 4 and the car can finish the track on 28m/s speed with wiggling behavior. After adding I term with small value gain the car could accomplish the track successfully as following.
```
  double kp_steer=.07;
  double ki_steer=.005;;
  double kd_steer=2;
```

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `install-mac.sh` or `install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.

* Simulator. You can download these from the [releases tab](https://github.com/udacity/self-driving-car-sim/releases).
* Not a dependency but read the [DATA.md](./DATA.md) for a description of the data sent back from the simulator.


## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./mpc`.




 
    

