set PATH=C:\Users\brownem\.vscode\HusarionTools\bin\;%PATH%
cd e:\Code\Husarion Projects\Husarion_VSC || exit 1
start /wait st-flash write myproject.bin 0x08010000 || exit 1
start st-util
arm-none-eabi-gdb %*