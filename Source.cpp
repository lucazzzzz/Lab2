#include "VideoPlayer.h"
#include <Python.h>
#include "VideoState.h"
#include <iostream>

static PyObject* manager(PyObject* self, PyObject* args) {

	static VideoState stage = STAGE_PAUSE;
	static Videoplayer VP = Videoplayer();
	
	char c;
	PyArg_ParseTuple(args, "c", &c);

	if (c == '0') {
		VP.Run();
		stage = STAGE_PLAY;
	}


	if (c == '1') {
		if (stage == STAGE_PLAY) {
			VP.Pause();
			stage = STAGE_PAUSE;
			printf("Pause");
		}
		else if (stage == STAGE_PAUSE) {
			VP.Run();
			stage = STAGE_PLAY;
			printf("Play");
		}
		else if (stage == STAGE_FORWARD) {
			VP.NF();
			stage = STAGE_PLAY;
			printf("Play");
		}
		else {
			VP.Run();
			stage = STAGE_PLAY;
			printf("Play");
		}
	} else if (c == '2') {
		if (stage != STAGE_FORWARD && stage != STAGE_PAUSE) {
			stage = STAGE_FORWARD;
			VP.FF();
			printf("FastForward");
		}
		else if (stage != STAGE_PAUSE && stage != STAGE_PLAY) {
			stage = STAGE_PLAY;
			VP.NF();
			printf("Play");
		}
	} else if (c == '3') {
		VP.RetourArriere();
		printf("Retour");
	} else if (c == '4') {
		VP.End();
		printf("Quit");
	}

	PyObject * python_val = Py_BuildValue("i", manager);
	return python_val;

}

static PyMethodDef methods[] = {
		{ "manager",(PyCFunction)manager, METH_VARARGS,
		"Generate random number betweeen 0-9" },
		{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef myModule =
{
	PyModuleDef_HEAD_INIT, "myModule", "", -1, methods
};

PyMODINIT_FUNC PyInit_myModule(void)
{

	return PyModule_Create(&myModule);
}