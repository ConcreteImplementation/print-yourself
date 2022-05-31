#include <stdio.h>
void fonction(){
	// commentaire dans fonction
	printf("\tfonction();\n\treturn 0;\n}\n");
}
int main(int argc, char const *argv[])
{
	// un commentaire
#define printf_after(x) printf(x"\tprintf_after("#x");\n")
	printf_after("#include <stdio.h>\nvoid fonction(){\n\t// commentaire dans fonction\n\tprintf(\"\\tfonction();\\n\\treturn 0;\\n}\\n\");\n}\nint main(int argc, char const *argv[])\n{\n\t// un commentaire\n#define printf_after(x) printf(x\"\\tprintf_after(\"#x\");\\n\")\n");
	fonction();
	return 0;
}
