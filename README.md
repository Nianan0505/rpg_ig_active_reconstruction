Information Gain Based Active Reconstruction
============================================

This repository contains the code for **information gain based active reconstruction**, presented in the papers:

*An Information Gain Formulation for Active Volumetric 3D Reconstruction*  
S. Isler, R. Sabzevari, J. Delmerico and D. Scaramuzza (ICRA 2016)  
[Paper: http://rpg.ifi.uzh.ch/docs/ICRA16_Isler.pdf](http://rpg.ifi.uzh.ch/docs/ICRA16_Isler.pdf)  
[Video (Youtube)](https://www.youtube.com/watch?v=ZcJcsoGGqbA&feature=youtu.be) 

and 

*A comparison of volumetric information gain metrics for active 3D object reconstruction*  
J. Delmerico, S. Isler, R. Sabzevari, and D. Scaramuzza (Autonomous Robots 2017)  
[Paper: http://rpg.ifi.uzh.ch/docs/AURO17_Delmerico.pdf](http://rpg.ifi.uzh.ch/docs/AURO17_Delmerico.pdf)

If you use this software in a scholarly work, please cite our journal paper:

```
@article{delmerico2018comparison,
  title={A comparison of volumetric information gain metrics for active 3D object reconstruction},
  author={Delmerico, Jeffrey and Isler, Stefan and Sabzevari, Reza and Scaramuzza, Davide},
  journal={Autonomous Robots},
  volume={42},
  number={2},
  pages={197--208},
  year={2018},
  publisher={Springer}
}
```

#### Disclaimer

The ig_active_reconstruction implementation in this repository is research code, any fitness for a particular purpose is disclaimed.

The code has been tested in Ubuntu 14.04 with ROS Indigo.

#### Licence

The source code is released under a GPLv3 licence.

http://www.gnu.org/licenses/

#### Citing

If you use ig_active_reconstruction in an academic context, please cite the following publication:

    @inproceedings{Isler2016ICRA,
      title={An Information Gain Formulation for Active Volumetric 3D Reconstruction},
      author={Isler, Stefan and Sabzevari, Reza and Delmerico, Jeffrey and Scaramuzza, Davide},
      booktitle={IEEE International Conference on Robotics and Automation (ICRA)},
      year={2016},
      organization={IEEE}
    }

#### Install and run ig_active_reconstruction

The wiki 

https://github.com/uzh-rpg/rpg_ig_active_reconstruction/wiki

contains instructions on how to build and run the code.

**RUN THE CODE**

- export GAZEBO_MODEL_PATH=$HOME/program/ig_ws/src/rpg_ig_active_reconstruction/example/flying_gazebo_stereo_cam/model:$GAZEBO_MODEL_PATH
- **roslaunch flying_gazebo_stereo_cam robot_interface.launch**
  Launches Gazebo and loads the bunny (if you put it in the models folder), starts a viewspace model and **a robot interface ROS node** offering their services to other ig_active_reconstruction components
- **roslaunch flying_gazebo_stereo_cam flying_gazebo_stereo_cam.launch** Launches the node that spawns the stereo camera (You should see two small boxes pointing at the origin) in Gazebo. This needs to be started after robot_interface.
- **roslaunch ig_active_reconstruction_octomap octomap_world_representation.launch**
  Launches a world representation ROS node using Octomap as a container and offering information gain calculation capabilities.
- **roslaunch ig_active_reconstruction_ros basic_view_planner.launch**
  Launches a basic view planner node with a simple command line user interface that allows you to start, pause and stop the procedure. **To start the demo, press 'g' and then 'Enter' in this terminal.**

#### Acknowledgments

Thanks to Pavel Vechersky for his key contributions, as well as to Elias Mueggler, Matthias Faessler, and Junjie Zhang for their valuable feedback.

#### Contributing

You are very welcome to contribute to ig_active_reconstruction by opening a pull request via Github.
We try to follow the ROS C++ style guide http://wiki.ros.org/CppStyleGuide



