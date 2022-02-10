# lm4075e_homing

How to install vscode on raspberry pi 4 ubuntu mate

1. Repository

```
sudo sh -c 'curl https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > /etc/apt/trusted.gpg.d/microsoft.gpg'
```

```
sudo sh -c 'echo "deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main" > /etc/apt/sources.list.d/vscode.list'
```

2. Update repository
```
sudo apt update
```

3. Install
```
sudo apt install code
```

WiringPi Installation

```
git clone https://github.com/WiringPi/WiringPi
```

```
cd WiringPi
```

```
./build
```


First of all, execute lm4075e.

Terminal 1
```
lm4075e_homing/build $ sudo ./lm4075e_homing
```

Alias
```
homing
```

alais homing='cd ~/Documents/lm4075e_homing/build && sudo ./lm4075e_homing'

Then execute lm4075e controller.

The homing allows for permission for GPIO pwm pin.

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
