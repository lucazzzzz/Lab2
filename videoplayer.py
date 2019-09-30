import myModule
import readchar

myModule.manager(b'0')

while True:
	key = readchar.readkey()
	if key == 'p':
		myModule.manager(b'1')
	elif key == 'a':
		myModule.manager(b'2')
	elif key == 'r':
		myModule.manager(b'3')
	elif key == 'q':
		myModule.manager(b'4')
		break