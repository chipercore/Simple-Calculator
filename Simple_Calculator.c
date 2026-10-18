

#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf(" /░░░░    /░░░   /░░░░   /░ /░    /█▀▀▀/    /░░░░           /░░░░    /░░░    /░░░░    /█▀▀▀/\n");
    printf("│ ▒__/   │/_▒/  │_▒ /▒  │ ▒▒▒▒   │ ▓▓▓     │_▒ /▒          │ ▒__/   │_▒/▒   │_▒ /▒   │ ▓▓▓\n");
    printf("│ ▓       │ ▓   │ ▓▓▓/  │ ▓_/▓   │_▒_/     │ ▓▓▓/          │ ▓      │ ▓ ▓   │ ▓▓▓/   │_▒_/\n");
    printf("│ ████    /███  │ █_/   │ █│ █   │ ░░░░    │ █_/█          │ ████   │ ███   │ █_/█   │ ░░░░\n");
    printf("│/___/   │/__/  │//     │//│//   │/___/    │// //          │/___/   │/__/   │// //   │/___/\n");
    printf("                                                                                               ");
    printf("                                                  Dᴇᴠᴇʟᴏᴘᴇᴅ Bʏ Cʜɪᴘᴇʀ  • ᴠᴇʀsɪᴏɴ 1.0 • ᴄʜɪᴘᴇʀ ᴄᴏʀᴇ    ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             \n");


    int num1,num2,add,sub,mul,div,cal;
    printf("Enter frist Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    printf("Which calculation will you do?\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division\nSelect anyone:");
    scanf("%d",&cal);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    if
        (cal == 1 )
        printf("Addition: %d",add);
    if
        (cal == 2)
        printf("Subtraction: %d",sub);
    if
        (cal == 3)
        printf("Multiplication: %d",mul);
    if
        (cal == 4)
        printf("Division: %d",div);

    else
        printf("Please choose from 1–4");

    return 0;
}


