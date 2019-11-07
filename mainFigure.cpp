#define WIDTH 1280

PrismHexagonal prH(0,0,0,5,6,2);
PyramidPentagonal pyP(0,0,0,4,8);
PyramidTriangular pyT(0,0,0,4,8);
PyramidHexagonal pyH(0,0,0,4,8);
PrismPentagonal prP(0,0,0,5,6,1);
PrismCuadrangular prC(0,0,0,3,6,9);
PrismTriangular prT(0,0,0,3,8);
Cube cubito(0, 0, 0, 9, 1);
float angle = 0.0;

void initializer(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0); // COLOR CANVAS
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_DEPTH_TEST);
}

void idle_cb() {
	angle += 0.05;
	glutPostRedisplay();
}

void displayScreen(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glViewport(150, 150, 300, 300);

	//pyT.drawFigure();
	//pyH.drawFigure();
	//pyP.drawFigure();
	//prP.drawFigure();
	//prT.drawFigure();
	prC.drawFigure();
	//prH.drawFigure();
	//cubito.drawFigure();

	glutSwapBuffers();
}

void teclado_cb(GLubyte key, GLint x, GLint y) {
	switch (key) {
	case 27:
		//exit(1);
		break;
	case 'x':
		// aqu  se procesar a la tecla <x>
		glRotatef(1.0, 1.0, 0.0, 0.0);
		break;
	case 'y':
		// aqu  se procesar a la tecla <y>
		glRotatef(1.0, 0.0, 1.0, 0.0);
		break;
	case 'z':
		// aqu  se procesar a la tecla <z>
		glRotatef(1.0, 0.0, 0.0, 1.0);
		break;
	case 'e':
		// aqu  se procesar a la tecla <e>
		glRotatef(5.0, 1.0, 1.0, 1.0);
		break;
	case 'r':
		// aqu  se procesar a la tecla <r>
		glLoadIdentity();
		angle = 0.0;
		break;
	case 'a':
		// aqu  se procesar a la tecla <a>
		angle += 5;
		break;
	default:
		break;

	}
	glutPostRedisplay();

}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(WIDTH, HEIGHT); // ESTABLECE EL TAMANO DE LA VENTANA
	glutCreateWindow("CUBO 3D");

	initializer(); // INICIALIZA LA VENTANA
	glutDisplayFunc(displayScreen); // ACTUALIZA LA PANTALLA DE TRAZADO
	glutKeyboardFunc(teclado_cb);
	glutIdleFunc(idle_cb);

	glutMainLoop(); // GENERA EL LOOP

	return 0;
}
