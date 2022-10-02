<head>
<style>
    h1{
        color: #CA64EA
    }
    h2{
        color: #FAA705
    }
    p{
        text-align: justify;
        text-indent: 5%
    }
    li{
        margin-top: 10px;
        margin-bottom: 10px;
    }
</style>
</head>

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


<div>
<h2>How to Set Up Studio Visual Code (SVC) and MinGW?</h2>
   <ul style="list-style-type:none;">
      <li>Step 1: Download the latest version of <a href="https://code.visualstudio.com/download">Visual Studio Code</a>. The installation follows the same processes as other applications.</li>
      <li>Step 2: Get a compiler. You can either download the MinGW installer from its <a href="https://www.mingw-w64.org">official page</a>, or get it from other sites like <a href="https://sourceforge.net/projects/mingw/">SourceForge</a>.</li>
        <div style="display:flex; justify-content:center">
        <img src=".\.image\Step2-Download.png" alt="MinGW Installer">
        </div>
      <li>Step 3: Install the compiler. Follow the installation process. Setup which directory you will install MinGW. Wait for the process to finish. Then, click on continue when done.</li>
    </ul>
</div>
