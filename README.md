# Pre_Group
# Group4_Course

## Project Title

Agile, Responsible, and Collaborative Development


## Project Description

In order to achieve the goal of developing basic documentation and building development software, we need to complete the implementation of the build system and storage continuous integration of repositories.

The specific task is to clone the template repository and use the Google test testing framework to implement the following three tests:
1.Check that the type of the model parameters (F, k) matches that of the element type of the u and v vectors.
2.Check that the variables u and v are the same size.
3.Check that the simulation produces the mathematically correct answer when u = 0 and v = 0. 
CMake is then used to automate the build process and ultimately implement continuous integration(CI).


## Preparation Conditions & Implementation Process:

### 1. Clone the template repository 
1. Clone the Repository:
· Open Terminal or Command Prompt.</br>
· Use the git clone command with the repository's SSH address to clone it, e.g., git clone git@github.com:user/repo.git.</br>


### 2. GoogleTest
Our group decided to use the GoogleTest tool，because GoogleTest provides a comprehensive set of features for writing and organizing tests and GoogleTest integrates well with popular build systems like CMake.Here are some of the steps we take to use GoogleTest：
2.1 Clone the GoogleTest repository from GitHub and build GoogleTest using CMake.

2.2 Create a Test Directory

2.3.1 The first test we use 'typeid()' to check the type of the input of F,K. They are supposed to be float.

2.3.2 The second test we use '.size()' to check the size of the input of U and V. They are supposed to be Multidimensional Arrays.

2.3.3 The third test we simply let u=0 and v=0  compute the finalvalue of the

### 3.CMake:
Cmake:Our group decided to use CMake, a more advanced compiler configuration tool，which doesn't have to write a makefile for each standard.Here are some of the steps we take to use cmake：
1. Configure the build in a terminal in VS Code and navigate to our project directory. 
2. Update our CMakeLists.txt to include the testing framework and link it with our main code.
3. Create a test directory and write test.
4. Create a build task named "build" in our file.
5. Configure VS Code to run and debug tests directly from the editor. 
---
### 4.Github action:
1. Create athe GitHub Actions workflow in a YAML file (cmake-multi-platform.yml) to achieve Continuous Integration.  
2. Use "on" to trigger on every push to the main branch.
3. Use "jobs" to define a single job named build that runs on the latest version of the Ubuntu environment.
4. Use "Steps" to checkout repository、set up CMake、run tests.

## Use this Project 

### 1.To automate testing
This ensures that the test covers the basic framework of the gs.cpp.
### 2.Execute build and run tests with each commit.
Use Github action to complete continuous integration, which can improve productivity.

---

## Expected Output

---

## Participants
1. Jianqiao Zhao @cwnq56</br>
2. Xiangyi He @sxdt87</br>
3. Yizhi Fang @thxt38</br>
4. Yumen Xie @gccw95</br>
5. Zhiyu Zhu @rhth53


## Contact Us
Jianqiao Zhao:  cwnq56@durham.ac.uk <br>
Xiangyi He: sxdt87@durham.ac.uk <br>
Yizhi Fang: thxt38@durham.ac.uk
Yumen Xie: gccw95@durham.ac.uk
Zhiyu Zhu: rhth53@durham.ac.uk

## Acknowledgments
Show gratitude to individuals or organizations that helped with the project.


