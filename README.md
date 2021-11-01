# CRZAIMBOT
![Screenshot_1](https://user-images.githubusercontent.com/43528203/104972749-3edea300-5a25-11eb-82e4-2ff7d85e9937.png)

# How To Use
1. Just Compile The Source with Release Option
2. Find CRZAimbot.dll on x64\release\ folder
3. Make Sure you already load memory.efi
4. Open any x64 process(2*) that you want as admin like Notepad
5. Drag CRZAimbot.dll and drop to Injection
6. Type name of proccess application 64 bit ( notepad.exe)
7. Answer The Question ( 1 = true and 0 False )
8. Open The Game and Have fun!

# How To Load Memory.efi
1. Copy USB folder contents to an USB Drive, restart your computer and start with your USB(1*)
2. Press enter in the console until you see the shell and search for your USB drive device, normally around FS0-FS3
3. Go inside the drive with this name and check that you have there the memory.efi (ls command...)
4. Put load memory.efi  : https://streamable.com/sdp5pg
5. Put exit and now in you Boot Menu/Bios remove your usb drive and run windows normally (In any case you can follow the steps here efi-mapper)

# You see the successful message but no blue screen?, or You see the blue screen but only listen one long beep?
Try to launch your windows directly from the console after load memory.efi (https://streamable.com/56ibdm), Steps:
1. With bcfg boot dump you can list the installed bootable systems
2. Find your windows boot installation path
3. Find the device where is located (fs0..fs1..fs2...)
4. And run the path as command for example (in my case Windows 2004 x64 UEFI): fs1:\EFI\Microsoft\Boot\bootmgfw.efi
5. Or check the video https://streamable.com/56ibdm

# Your bios got stuck after load memory.efi?
try with different usb key, make sure that is formatted as fat32 and better with small partition (must use GPT as partition layout)
You can't boot from the USB with your bios or you get a black screen and you already try everything? Try this:
https://www.unknowncheats.me/forum/2859468-post33.html

# Contact me On Discord : !'★Diegø ツ#6299
