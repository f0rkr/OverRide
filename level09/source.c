void secret_backdoor(void)

{
	char local_88 [128];

	fgets(local_88,128,stdin);
	system(local_88);
	return;
}

void set_msg(char *string)

{
	int i;
	char *puVar2;
	char buffer [128];

	puVar2 = buffer;
	for (i = 0x80; i != 0; i = i + -1) {
		puVar2 = 0;
		puVar2 = puVar2 + 8;
	}
	puts(">: Msg @Unix-Dude");
	printf(">>: ");
	fgets(buffer,1024,stdin);
	strncpy(string,buffer,(long)*(int *)(string + 180));
	return;
}

void set_username(char string[])
{
	long i;
	char *puVar2;
	char buffer [17];
	int j;

	pointer = buffer;
	for (i = 16; i != 0; i--) {
		*puVar2 = 0;
		puVar2++;
	}
	puts(">: Enter your username");
	printf(">>: ");
	fgets((char *)buffer,128,stdin);
	for (j = 0; (j < 41 && buffer[j] != '\0'); j = j + 1) {
		string[140 + j] = buffer[j];
	}
	printf(">: Welcome, %s",string + 140);
	return;
}

void handle_msg(void)
{
	char j8 [140];

	set_username(j8);
	set_msg(j8);
	puts(">: Msg sent!");
	return;
}

int main(void)
{
  puts(
      "--------------------------------------------\n|   ~Welcome to l33t-m$n ~    v1337        |\n- -------------------------------------------"
      );
  handle_msg();
  return 0;
}