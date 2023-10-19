# monty 

## Monty Language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Aim
To makes an interpertor that can handle monty files, files ending with  `.m`. Monty files will have on instruction per line (usually) .The interpreter needs check the following:
- if the file or path to the file is a monty file, if not handle any errors
- Open the file its it's monty
- Clear any unwanted white space in the file
- Clear any additional texts as it wont be taken into account
- Execute the instruction in the file line by line, if there is an error, it must show the error in that line and exit. The code must stop if:
	- every line is executed correctly
	- an error in the file
	- if an error occurred
- Any malloc error needs to be exited with a status code
- The interperator will handle instructions like `push`, `pint`, `pall`, `pop`, `add`



