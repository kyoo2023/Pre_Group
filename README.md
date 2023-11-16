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
1. Clone the Repository:</br>
· Open Terminal or Command Prompt.</br>
· Use the git clone command with the repository's SSH address to clone it： git clone git@github.com:user/repo.git.</br>
2. Connect the Cloned Repository to the Group Project:</br>
· Set the URL for the remote repository: git remote add origin <git@github.com:user/repo.git.>.</br>
· Push the code to the new repository: git push -u origin master or git push -u origin main (depending on your branch name).</br>


### 2. GoogleTest
Our group decided to use the GoogleTest tool，because GoogleTest provides a comprehensive set of features for writing and organizing tests and GoogleTest integrates well with popular build systems like CMake. (In fact, at first, I write the test on Visual Studio, where has combined GoogleTest. And copy them to the right place after all tests were successful) 

2.1 The first test we use 'typeid()' to check the type of the input of F,K. They are supposed to be float.

2.2 The second test we use '.size()' to check the size of the input of U and V. They are suppossed to be Multidiwmensional Arrays.

2.3 The third test we simply let u=0 and v=0, compute the finalvalue of the dU and dV check whether it is right. 
   Based on the physical meanings of the u and v are the concentration of the chemicals, we also use the function countElementAboveThreshold(Threshold) to see whether this number is 0.

### 3.CMake:
Considering that we use C++ to write the project, we chose a common tool: CMake. It has two obvious advantages: it does not limit the use of platforms and you can use add and other commands in the terminal to simplify the introduction and management of third-party libraries.
Here are some of the steps we take to use CMake：
1. Download the compilation tool MinGW and set up the CMake environment. 
2. Write the cmakelists file and indicate the dependency on Googletest:</br>
   Use cmake_minimum_required to limit the minimum version requirements of cmake;</br>
   Use project(my_project) to create a project;</br>
   Use add_executable to compile source files into executable files.</br>
3. Create a build task named "build" in our file.
4. Configure VS to run and debug tests directly from the editor. 

### 4.Github action:
1. Create athe GitHub Actions workflow in a YAML file (cmake-multi-platform.yml) to achieve Continuous Integration.  
2. Use "on" to trigger on every push to the main and test_1 branch.
3. Use "jobs" to define a single job named build that runs on the latest version of the ubuntu and windows environment.
4. Use "steps" to checkout repository、set up CMake、run tests.

## Use this Project 

### 1.To automate testing
This ensures that the test covers the basic framework of the gs.cpp.
### 2.Execute build and run tests with each commit.
Use Github action to complete continuous integration, which can improve productivity.

---

## Expected Output
![image] (https://github.com/kyoo2023/Pre_Group/blob/test-1/CtestResult.png)
![image] (https://github.com/kyoo2023/Pre_Group/blob/test-1/ContinuousIntegrationResult.png)
---

## Participants
1. Jianqiao Zhao @cwnq56</br>
2. Xiangyi He @sxdt87</br>
3. Yizhi Fang @thxt38</br>
4. Yumen Xie @gccw95</br>
5. Zhiyu Zhu @rhth53


## Contact Us
Jianqiao Zhao:  cwnq56@durham.ac.uk </br>
Xiangyi He: sxdt87@durham.ac.uk </br>
Yizhi Fang: thxt38@durham.ac.uk</br>
Yumen Xie: gccw95@durham.ac.uk</br>
Zhiyu Zhu: rhth53@durham.ac.uk

## Acknowledgments
Show gratitude to individuals or organizations that helped with the project.


