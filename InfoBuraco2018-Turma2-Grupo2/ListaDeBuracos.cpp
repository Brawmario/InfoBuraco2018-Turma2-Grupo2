#include "ListaDeBuracos.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	InfoBuraco2018Turma2Grupo2::ListaDeBuracos listaDeBuracos;
	Application::Run(%listaDeBuracos);