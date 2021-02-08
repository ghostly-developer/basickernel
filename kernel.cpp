//standard cpp include replacements
void printf(char* str){
    unsigned short* VideoMemory = (unsigned short*)0xb8000;

    for(int i = 0; str[i] != '\0'; i++)
        VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
}


extern "C" void kernelMain(void* multiboot_struct, unsigned int magicnum){ //magic num int is for the bootloader to recognise this cpp program as a kernel
    printf("MARIO OS  ---  IN DEVELOPMENT"); //isnt this obvious

    while(1); //InfiniteLoop
}

