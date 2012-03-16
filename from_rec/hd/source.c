#include <stdio.h>
#include <sys/stat.h>

void	dumpline(unsigned char *p, unsigned long offset, int cnt)
{
	char	buff[80];
	int	c;
	int	len;

	sprintf(buff, "%08lX:", offset);
	if(cnt > 16)
	    cnt = 16;
	for(c = 0; c < cnt; ++c)
	    sprintf(buff + c * 3 + 9, " %02lX", p[c]);
	while(c++ < 16)
	    strcat(buff, "   ");
	len = strlen(buff);
	strcpy(buff + len, "  |");
	for(c = 0; c < cnt; ++c)
	    buff[len + c] = (p[c] >= ' ' && p[c] <= 0x7e) ? p[c] : '.';
	while(c < 16)
	    buff[len + c++] = ' ';
	strcpy(buff + len + c, "|");
	printf("%s\n", buff);
}

int	hexdump(char *fname)
{
	unsigned char	buff[16];
	unsigned long	offset;
	FILE		*fp;
	struct stat	st;
	int		cnt;

	if(!stat(fname, &st)) {
	    perror(fname);
	    return(1);
	}
	if(!(fp = fopen(fname, "rb"))) {
	    perror(fname);
	    return(1);
	}
	offset = 0;
	while(offset < st.st_size) {
	    cnt = fread(buff, 1, sizeof(buff), fp);
	    if(!cnt)
		break;
	    dumpline(buff, offset, cnt);
	    offset += cnt;
	}
	fclose(fp);
	return(0);
	
}

int	main(int argc, char *argv[])
{
	int	i;
	int	errs;

	errs = 0;
	for(i = 1; i < argc; ++i)
	    errs += hexdump(argv[i]);
	return(errs);
}

