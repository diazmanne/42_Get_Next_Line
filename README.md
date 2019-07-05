
# Get Next Line

This projects shows you how to build a C function that allows to read a document line by line using the a newline character ('\n') as delimiter, without knowing its size beforehand. Returninng an integer value if the line is found..  

# I.	SCOPE
# II.	REQUIREMENTS
# III.	DEFINITIONS AND ACRONYMS
# IV.	PROJECT SPECIFIC INFORMATION
# V.	PROCEDURE
# VI.	RESPONSIBILITIES
# VII.	ASSOCIATED DOCUMENTS
# VIII. RECORDS
# IX.	PROCESS
# X.	ATTACHMENTS
# XI.	APPROVAL SIGNATURES
# XII.	CONTRIBUTING



###I.	SCOPE

GNL is designed to train you in key concepts input - output system call, static variables , memory  and error management. The project needs approximately 20 hrs in over a 4 weeks period.

###	II.	REQUIREMENTS

* libft
* author
* get_next_line.c
* get_next_line.h


###	III.	DEFINITIONS AND ACRONYMS

-GNL: Get Next Line.
-I/O: Input - Output System Call

####	Definitions:

Line: string that ends with a ‘\n’
Proto:
`int	get_next_line(const int fd, char **line);`

###	Returning values:

`1` | Line read.

`0` | No read, end of file.

`-1` | Error.

###	IV.	PROJECT SPECIFIC INFORMATION

* Allowed Functions `read`, `free`,`close`
* Gnl functions must be 5 functions of 25 max
* `#define BUFF_SIZE [1,9999,17] `
* `$>cat -e author`
* `user_login$`

###	V.	PROCEDURE

##### Compilation:

`make all` | First time compilation.

`make fclean` | Delete files generated from compilation.

`make re` | Delete files generated from compilation and recompile.

###		Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.




