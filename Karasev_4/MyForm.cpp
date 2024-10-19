#include "Matrix.h"
#include "Transform.h"
#include "Figure.h"
#include <vector>
#include <fstream>
#include <sstream>
#include "Clip.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array < String^ >^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Karasev::MyForm form;
	Application::Run(% form);
}