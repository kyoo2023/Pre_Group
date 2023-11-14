# Group 4 Solution
Group Course by Group4

## Purpose of this project
This Project simulates a Gray-Scott reaction-diffusion system and outputs some VTK files for visualization.<br>
Besides, we implement these 3 test for the system:<br>
1. Check that the type of the model parameters (F, k) matches that of the element type of the u and v vectors.
2. Check that the variables u and v are the same size.
3. Check that the simulation produces the mathematically correct answer when u = 0 and v = 0.

---

## These conditions our group prepared for this project:
### 1.GoogleTest:
Our group decided to use the GoogleTest tool，because GoogleTest provides a comprehensive set of features for writing and organizing tests and GoogleTest integrates well with popular build systems like CMake.Here are some of the steps we take to use GoogleTest：
1. Clone the GoogleTest repository from GitHub and build GoogleTest using CMake.
2. Create a Test Directory.
3. The first test we use "std::is_same" to check whether F,K are the same as double.
4. The second test we creates a checksize function and uses an if statement to determine if the row size and column size are the same.
5. The third test

### 2.CMake:
Cmake:Our group decided to use CMake, a more advanced compiler configuration tool，which doesn't have to write a makefile for each standard.Here are some of the steps we take to use cmake：
1. Configure the build in a terminal in VS Code and navigate to our project directory. 
2. Update our CMakeLists.txt to include the testing framework and link it with our main code.
3. Create a test directory and write test.
4. Create a build task named "build" in our file.
5. Configure VS Code to run and debug tests directly from the editor. 
---
### 3.Github action:
Create athe GitHub Actions workflow in a YAML file (cmake-multi-platform.yml) to achieve Continuous Integration.  

## Use this Project 
### 1.To automate testing
This ensures that the test covers the basic framework of the gs.cpp.
### 2.Execute build and run tests with each commit.
Use Github action to complete continuous integration, which can improve productivity.

---

## Expected Output
zhe li xie shu chu

---

# participants:
1. Jianqiao Zhao @cwnq56
2. Yumen Xie @gccw95
3. Yizhi Fang @xxxx
4. Xiangyi He @xxxx
5. Zhiyu Zhu @rhth53

---

# Contact Us:
Email of us: shei ba zi ji email xie shang qu
