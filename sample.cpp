#include "GLHelper.h"

void main() {

	Display->CreateDisplay("OpenGL", 600, 600);

	var circle = Shape().circle(0, 0, 0.5);

	Display->Render([] {
		circle->render();
	});

	Display->Update([](double timeStep) {
		circle->translation(sin(TIME), 0);
	});

}