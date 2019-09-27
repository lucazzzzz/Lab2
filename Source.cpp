#include "VideoPlayer.h"
#include <Python.h>
#include "VideoState.h"
#include <iostream>

static PyObject* manager(PyObject* self, PyObject* args) {

	static VideoState State;
	static Videoplayer VP = Videoplayer();
	VP.Run();
	PyObject * python_val = Py_BuildValue("i", boucle);
	return python_val;

}


static PyMethodDef methods[] = {
		{ "manager",(PyCFunction)manager, METH_NOARGS,
		"Fonction pour utiliser les fonctionnalités de lecture vidéo" },
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