# cpp-Basics
This repository contains basic C++ programs. All Rights Reserved • LA Nuñez 2022.
<hr>

<h1>How To Run C++ Program in Studio Visual Code (SVC) with MinGW</h1>
<div>
<img src=".\.image\LA-Tag2.png" alt="LA Tag" height="75">
</div>


<h2>What is C++?</h2>

<p> <b>C++</b> is an Object-Oriented Programming Language (OOPL) that allows developers to create a  bigger and more complex program, software, or applications. C++, being an OOPL, can support classes and objects; something that the C language does not do. A typical C++ program needs an editor and a compiler to get it to work.  </p>

<div>
<h2>Using IDE for C++</h2>

<p> There are a number of known Integrated Development Environment (IDEs) in existence that can be used to run various C++ programs. IDEs can make your C++ coding and compiling easier; as it can be used to edit and debug your programs. Some IDEs are usually pre-packed with a compiler. Known IDEs that can run a C++ Program are Eclipse, NetBeans, Visual Studio, and Dev C++. 
 </p>
</div>


<div>
<h2>Visual Studio Vs Visual Studio Code</h2>

<p> There are a number of known Integrated Development Environment (IDEs) in existence that can be used to run various C++ programs. IDEs can make your C++ coding and compiling easier; as it can be used to edit and debug your programs. Some IDEs are usually pre-packed with a compiler. Known IDEs that can run a C++ Program are Eclipse, NetBeans, Visual Studio, and Dev C++. 
 </p>

<p> As a comprehensive IDE, Visual Studio (VS) is pre-packed with all the tools and features needed in any stage of software development. Upon installation, users are free to install whatever packs they need for development. However,  being a full-on and reliable IDE, its performance can be relatively slower when it comes to processing across different platforms. It also comes in with a larger overall download size; and requires a pretty big space in terms of storage and memory to run smoothly.
 </p>

<div style="display:flex; justify-content:center">
<img src=".\.image\VisualStudio-packs.png" alt="Visual Studio Installable Packs">
</div>

<p> On the other hand, Visual Studio Code (VSC) is a code editor and is more developer-friendly in terms of portability and performance. It is faster than Visual Studio and has various professionally curated plugins and extensions that can help developers from editing to compilations. In terms of space, compared to VS, it has a smaller download size, with lesser storage and memory size demands. As a code editor, VSC needs a separate compiler to successfully execute programs.
 </p>

<p> Overall, Visual Studio and Visual Studio Code can be installed simultaneously on a single device; and it would not complicate the device. 
 </p>

</div>

<div>
<h2>MingGW</h2>
<p>For a C++ program to be successfully executed in Visual Studio Code, it needs a compiler. Minimalist GNU for Windows (MinGW) is a support for the GNU Compiler Collection (GCC) compiler for Microsoft Windows Application. GCC helps VSC to compile your code and let it be executable, MinGW is a bridge between VS and GCC for Windows.</p>
</div>


<div id="how-to-install">
<h2>How to Set Up Studio Visual Code (SVC) and MinGW?</h2>
   <ul style="list-style-type:none;">
      <li>Step 1: Download the latest version of <a href="https://code.visualstudio.com/download">Visual Studio Code</a>. The installation follows the same processes as other applications.</li>
      <li>Step 2: Get a compiler. You can either download the MinGW installer from its <a href="https://www.mingw-w64.org">official page</a>, or get it from other sites like <a href="https://sourceforge.net/projects/mingw/">SourceForge</a>.</li>
        <div style="display:flex; justify-content:center">
        <img src=".\.image\Step2-Download.png" alt="MinGW Installer">
        </div>
      <li>Step 3: Install the compiler. Follow the installation process. Setup which directory you will install MinGW. Wait for the process to finish. Then, click on continue when done.</li>
        <div style="display:flex; justify-content:center">
        <img src=".\.image\Step3-Install MinGW.png" alt="Install MinGW">
        </div>
        <li>Step 4: After installation, the MinGW Installation Manager window will pop out. Right click on each of the packages available (or the ones you need) then click “Mark for Installation”. Lastly, on the upperleft corner, click on the “Installation” tab and “Apply Changes”. Once done you can now close the window. </li>
        <div style="display:flex; justify-content:center">
        <img src=".\.image\Step4-MinGW Installation Manager.png" alt="Install MinGW">
        </div><br>
        <div style="display:flex; justify-content:center">
        <img src=".\.image\Step4 - Mark for Installation.png" alt="Install MinGW"> <img src=".\.image\img.png" alt="Install MinGW">
        </div>
        <li>Step 5: Search for “Advanced System Settings” on your window’s search.</li>
        <div style="display:flex; justify-content:center">
        <img src=".\.image\Step5-WindowsSearch.png" alt="Environment Variables">
        </div>
        <li>Click on the “Environment Variables”. On the “System Variables” locate the path and select it. Click “Edit” to continue.</li>
        <div style="display:flex; justify-content:center">
        <img src=".\.image\Step 5 - Set1.png" alt="Environment Variables">
        </div>
        <li>Recall where you installed your MinGW folder and locate the folder “bin”. Note: My MinGW bin was located in C:\MinGW\bin.</li>
        <li>In the newly opened window named “Edit Environment Variable” click “New”. Paste the location of your MinGW bin folder and click “OK” to continue until all the advanced system settings windows are closed.</li>
        <div style="display:flex; justify-content:center">
        <img src=".\.image\Step 5 - Set2.png" alt="Environment Variables">
        </div> </ul>
</div>

<div>
<h2>Run and Compile your first C++ Program in Studio Visual Code with MinGW</h2>
<p>Once the Visual Studio Code (VSC) and MingGW has been set up, you can now open your VSC and create your first program. 
</p>
</div>  
Step 1: In the Visual Studio Code (VSC) Terminal, type in 

~~~
g++ --version
~~~
 
The system will show you your current g++ version if you had it installed. Yet, if not, you have to download MinGW to compile then run your c++ code. Check <a href="how-to-install"> here</a> for details on how to set up VSC and MinGW.

Step 2: Compile your code with g++. Type "g++ .\nameoffile.cpp". 

In this file, I used

~~~
g++ .\sample.cpp
~~~

A new "a.exe" will appear on your folder directory. It means that your project was successfully compiled by the compiler.  

Step 3: Run your "a.exe" on the terminal. Type 
~~~
.\a.exe
~~~
Then, it will run your program as how you've written it.
