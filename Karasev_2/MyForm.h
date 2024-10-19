#pragma once

namespace Karasev {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float lines[] = {
		0.5f,3.f,1.f,4.5f, // от левой щеки вверх до уха
		1.f,4.5f,0.5f,6.f, // левое ухо слева снизу вверх
		0.5f,6.f,0.5f, 7.5f, // левое ухо слева
		0.5f, 7.5f,1.f,8.f, // левое ухо верх слева
		1.f,8.f,1.5f,8.f, // левое ухо верх середина
		1.5f,8.f,2.f,7.5f, // левое ухо верх справа
		2.f,7.5f,1.5f, 6.f, // левое ухо справа сверху вниз
		1.5f, 6.f,1.5f,4.5f, // левое ухо справа до макушки
		1.5f,4.5f,3.f,4.5f, // макушка
		3.f,4.5f,3.f,6.f, // правое ухо слева снизу вверх
		3.f,6.f,2.5f,7.5f, // правое ухо слева
		2.5f,7.5f,3.f,8.f, // правое ухо верх слева
		3.f,8.f,3.5f,8.f, // правое ухо верх середина
		3.5f,8.f,4.f,7.5f, // правое ухо верх справа
		4.f,7.5f,4.f,6.f, // правое ухо сверху вниз
		4.f,6.f,3.5f,4.5f, // правое ухо справа
		3.5f,4.5f,4.f,3.f, // от правого уха вниз до щеки
		4.f,3.f,3.5f,1.5f, // правая скула
		3.5f,1.5f,2.5f,1.f, // подбородок справа
		2.5f,1.f,2.f,1.f, // подбородок снизу
		2.f,1.f,1.f,1.5f, // подбородок слева
		1.f,1.5f,0.5f,3.f, // левая скула
		// туловище
		4.f,3.f,5.5f,3.5f, // спина от головы вправо
		5.5f,3.5f,7.f,3.5f, // спина верх
		7.f,3.5f,7.5f,2.5f, // спина сверху до хвоста
		7.5f,2.5f,8.f,2.5f, // хвост сверху
		8.f,2.5f,8.f,2.f, // хвост справа
		8.f,2.f,7.5f,2.f, // хвост низ справа налево
		7.5f,2.f,7.5f,0.5f, // задняя нога справа сверху вниз
		7.5f,0.5f,6.5f,0.5f, // задняя нога низ
		6.5f,0.5f,6.5f,1.f, // задняя нога слева
		6.5f,1.f,6.f,1.f, // между задних ног
		6.f,1.f,6.f,0.5f, // левая задняя нога справа
		6.f,0.5f,5.f,0.5f, // левая задняя нога низ
		5.f,0.5f,5.f,1.f, // левая задняя нога слева
		5.f,1.f,4.f,1.f, // между задними и передними ногами
		4.f,1.f,4.f,0.5f, // правая передняя нога справа
		4.f,0.5f,3.f,0.5f, // правая передняя нога низ
		3.f,0.5f,3.f,1.f, // правая передняя нога слева
		3.f,1.f,2.5f,1.f, // между передних ног
		2.5f,1.f,2.5f,0.5f, // передняя нога справа
		2.5f,0.5f,1.5f,0.5f, // передняя нога низ
		1.5f,0.5f,1.5f,1.25f, // передняя нога слева
		// левый глаз
		1.5f,3.5f,1.5f,3.f, // левый глаз слева сверху вниз
		1.5f,3.f,2.f,3.f, // левый глаз низ
		2.f, 3.f,2.f,3.5f, // левый глаз справа
		2.f,3.5f,1.5f,3.5f, // левый глаз верх
		// правый глаз
		2.5f,3.5f,2.5f,3.f, // правый глаз слева
		2.5f,3.f,3.f, 3.f, // правый глаз снизу
		3.f,3.f,3.f,3.5f, // правый глаз справа
		3.f,3.5f,2.5f,3.5f, // правый глаз сверху
		// ушные раковины
		1.f,5.5f,1.f,7.f, // левая ушная раковина
		3.5f,5.5f,3.5f,7.f, // правая ушная раковина
		// нос
		2.f,2.5f,2.5f,2.5f, // нос сверху
		2.5f,2.5f,2.25f,2.f, // нос справа
		2.25f,2.f,2.f,2.5f // нос слева
	};

	float lines2[] = {
		// задняя ближняя нога
		2.5f,0.5f,2.f,1.f, // от левой точки ступни влево
		2.f,1.f,2.5f,2.f,
		2.5f,2.f,2.f,3.5f,
		2.f,3.5f,2.f,4.5f,
		2.f,4.5f,2.5f,5.5f,
		2.5f,5.5f,3.f,6.f, // стык левого уха с задом
		2.5f,0.5f,3.5f,0.5f, // от левой точки ступни вправо
		3.5f,0.5f,4.f,1.f,
		4.f,1.f,3.5f,2.f,
		3.5f,2.f,4.f,3.f, // конец ближней задней ноги
		// хвост
		2.f,3.5f,0.5f,3.5f,
		0.5f,3.5f,2.f,4.f,
		// дальняя задняя нога
		4.f,1.f,4.5f,1.f, // от правого выступа ближней задней ноги
		4.5f,1.f,5.f,1.5f,
		5.f,1.5f,4.5f,2.f,
		4.5f,2.f,3.5f,2.f, // стык с ближней задней ногой
		// животик
		4.5f,2.f,6.f,2.5f,
		6.f,2.5f,6.5f,3.f, // стык с ближней передней ногой
		// ближняя передняя нога 
		6.5f,3.f,6.5f,4.1f,
		5.5f,3.5f,6.75f,4.25f,
		6.5f,3.f,7.f,2.5f, // от стыка живота и ноги
		7.f,2.5f,8.f,3.f,
		8.f,3.f,8.f,3.5f,
		8.f,3.5f,7.5f,4.5f,
		7.5f,4.5f,6.f,5.f,
		// дальняя передняя нога
		6.5f,3.f,7.f,2.f,
		7.f,2.f,6.5f,1.5f,
		6.5f,1.5f,7.f,1.f,
		7.f,1.f,8.f,1.f,
		8.f,1.f,8.5f,1.5f,
		8.5f,1.5f,8.f,2.f,
		8.f,2.f,8.25f,4.25f,
		// нижняя часть шеи
		8.f,3.5f,8.5f,5.f,
		// спина
		3.f,6.f,5.f,6.f,
		5.f,6.f,7.f,6.5f,
		// левое ухо
		3.f,6.f,1.f,6.5f,
		1.f,6.5f,1.f,8.f,
		1.f,8.f,1.5f,9.f,
		1.5f,9.f,2.5f,10.f,
		2.5f,10.f,3.f,10.f,
		3.f,10.f,7.5f,9.f,
		3.f,10.f,7.f,8.5f,
		7.f,8.5f,6.f,8.5f,
		6.f,8.5f,5.5f,8.f,
		5.5f,8.f,5.5f,7.5f,
		// голова
		7.5f,6.f,7.f,6.5f,
		7.f,6.5f,6.5f,7.5f,
		6.5f,7.5f,7.f,8.5f,
		7.f,8.5f,7.5f,9.f,
		7.5f,9.f,9.5f,9.f,
		9.5f,9.f,10.f,8.5f,
		10.f,8.5f,10.f,8.f,
		10.f,8.f,10.5f,7.5f, // часть правого глаза
		10.5f,7.5f,10.5f,7.f,
		10.5f,7.f,10.f,6.5f,
		10.f,6.5f,9.5f,7.f,
		9.5f,7.f,9.f,7.f,
		9.f,7.f,8.f,6.f,
		// левая бровь
		7.5f,7.5f,7.5f,8.f,
		7.5f,8.f,8.f,8.5f,
		8.f,8.5f,8.5f,8.5f,
		// правая бровь
		9.5f,8.5f,10.5f,8.5f,
		10.5f,8.5f,11.f,8.f,
		11.f,8.f,11.f,7.5f,
		// левый глаз 
		8.f,7.f,8.f,7.5f,
		8.f,7.f,7.5f,7.f,
		8.f,7.5f,8.5f,8.f,
		8.5f,8.f,9.f,7.5f,
		9.f,7.5f,8.f,7.f,
		8.f,7.5f,8.5f,7.5f,
		8.5f,7.5f,8.5f,7.25f,
		// правый глаз
		10.f,8.f,9.5f,7.5f,
		9.5f,7.5f,10.f,7.f,
		10.f,7.f,10.5f,7.5f,
		9.5f,7.5f,10.f,7.5f,
		10.f,7.5f,10.f,7.f,
		// правое ухо
		9.5f,9.f,13.5f,10.f, // верхняя линия уха
		10.f,8.5f,13.5f,10.f, // внутренняя линия уха
		13.5f,10.f,13.5f,10.f,
		13.5f,10.f,14.f,9.5f,
		14.f,9.5f,14.f,8.f,
		14.f,8.f,12.f,6.5f,
		12.f,6.5f,10.f,5.5f,
		10.f,5.5f,9.5f,6.f,
		9.5f,6.f,9.5f,6.5f,
		// хобот
		9.5f,6.f,9.5f,5.5f,
		9.5f,5.5f,10.f,4.5f,
		10.f,4.5f,10.5f,4.f,
		10.5f,4.f,11.f,4.f,
		11.f,4.f,11.5f,4.5f,
		11.5f,4.5f,12.5f,4.f,
		12.5f,4.f,11.5f,3.f,
		11.5f,3.f,10.5f,3.f,
		10.5f,3.f,8.f,5.5f,
		9.5f,5.5f,9.f,5.f, // верхний залом (первый)
		10.f,4.5f,9.5f,4.f, // второй залом
		10.5f,4.f,10.5f,3.f, // третий залом
		11.f,4.f,11.5f,3.f, // четвертый залом
		// брызги (еще не менял)
		11.5f,4.5f,11.5f,6.f, // первый брызг
		11.5f,6.f,12.f,5.5f,
		12.f,5.5f,11.5f,4.5f,
		12.f,5.f,12.f,6.f, // второй брызг
		12.f,6.f,12.5f,6.f,
		12.5f,6.f,12.f,5.f,
		12.5f,5.5f,13.f,6.5f, // третий брызг
		13.f,6.5f,13.5f,6.5f,
		13.5f,6.5f,13.5f,6.f,
		13.5f,6.f,12.5f,5.5f,
		12.5f,4.5f,13.5f,5.5f, // четвертый брызг
		13.5f,5.5f,13.5f,5.f,
		13.5f,5.f,12.5f,4.5f
	};

	unsigned int arrayLength = sizeof(lines) / sizeof(float);
	unsigned int arrayLength2 = sizeof(lines2) / sizeof(float);
	float Vx = 8.5f; // размер рисунка по горизонтали
	float Vy = 8.5f; // размер рисунка по вертикали
	float Vx1 = 14.5f;
	float Vy1 = 10.5f;
	float aspectFig = Vx / Vy; // соотношение сторон рисунка
	float aspectFig1 = Vx1 / Vy1;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 241);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool keepAspectRatio; // значение - сохранять ли соотношение сторон рисунка?
	private:bool changePicture;
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->Clear(Color::AliceBlue);

		Pen^ BlackPen = gcnew Pen(Color::Black, 2);

		float Wx = ClientRectangle.Width; // размер окна по горизонтали
		float Wy = ClientRectangle.Height; // размер окна по вертикали
		float Wx1 = ClientRectangle.Width;
		float Wy1 = ClientRectangle.Height;

		
		float aspectForm = Wx / Wy; // соотношение сторон окна рисования
		float aspectForm1 = Wx1 / Wy1;
		float Sx, Sy, Sx1, Sy1;
		if (keepAspectRatio) {
			// коэффициентs увеличения при сохранении исходного соотношения сторон
			Sx = Sy = aspectFig < aspectForm ? Wy / Vy : Wx / Vx;
			Sx1 = Sy1 = aspectFig1 < aspectForm1 ? Wy1 / Vy1 : Wx1 / Vx1;
		}
		else {
			Sx = Wx / Vx; // коэффициент увеличения по оси Ox
			Sy = Wy / Vy; // коэффициент увеличения по оси Oy
			Sx1 = Wx1 / Vx1;
			Sy1 = Wy1 / Vy1;
		}
		float Ty = Sy * Vy; // смещение в положительную сторону по оси Oy после смены знака
		float Ty1 = Sy1 * Vy1;
		if (changePicture)
			for (int i = 0; i < arrayLength2; i += 4) {
				g->DrawLine(BlackPen, Sx1 * lines2[i], Ty1 - Sy1 * lines2[i + 1], Sx1 * lines2[i + 2], Ty1 - Sy1 * lines2[i + 3]);
			}
		else {
			for (int i = 0; i < arrayLength; i += 4) {
				g->DrawLine(BlackPen, Sx * lines[i], Ty - Sy * lines[i + 1], Sx * lines[i + 2], Ty - Sy * lines[i + 3]);
			}
		}

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		keepAspectRatio = true; // начальное значение: сохранять соотношение сторон рисунка
		changePicture = false;
	}

	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case Keys::M :
			keepAspectRatio = !keepAspectRatio;
			break;
		case Keys::N :
			changePicture = !changePicture;
			break;
		}
		Refresh();
	}

	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		Refresh();
	}
	};
}
