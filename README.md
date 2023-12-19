# cooldown 
this code is showing you how to do a pause in your code. for example, if u want to do a dialog with an auto read mode in a video game, u can put:
std::cout << "dialog...";
std::this_thread::sleep_for(std::chrono::seconds(10));
std::cout << "next dialog";

that would output: dialog... (wait 10 seconds) next dialog
if u want/need to be more accurate, u can use  (std::chrono::milliseconds(10000)); (that would also wait 1os, 1000ms = 1s)
hope this helps :) 
