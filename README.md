# lm4075e_homing

First of all, execute lm4075e.

Terminal 1
```
lm4075e_homing/build $ sudo ./lm4075e_homing
```


Terminal 2
```
$ sudo -s
```

```
root $ rosrun lm4075e_pwm_control main
```

Terminal 3

```
roslaunch tvc_control tvc_test.launch
```
