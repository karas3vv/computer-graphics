#pragma once

namespace Karasev {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282 * 2, 253 * 2);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->Clear(Color::Magenta);
		Pen^ redPen = gcnew Pen(Color::Red);
		redPen->Width = 6;
		Pen^ GreenPen = gcnew Pen(Color::Green);
		GreenPen->Width = 6;
		Pen^ BluePen = gcnew Pen(Color::Blue, 10);
		BluePen->Width = 6;
		SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
		System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 10);
		g->DrawLine(redPen, 0, 0, this->ClientRectangle.Width, this->ClientRectangle.Height);
		g->DrawLine(BluePen, 90, 50, ClientRectangle.Width, 80);
		g->DrawString("Надпись на форме", drawFont, drawBrush, 40, 100);
		g->DrawLine(GreenPen, this->ClientRectangle.Width / 3, this->ClientRectangle.Height, 0, this->ClientRectangle.Height / 3);
		g->DrawLine(GreenPen, 0, this->ClientRectangle.Height / 3, this->ClientRectangle.Width / 3 * 2, 0);
		g->DrawLine(GreenPen, this->ClientRectangle.Width / 3 * 2, 0, this->ClientRectangle.Width, this->ClientRectangle.Height / 3 * 2);
		g->DrawLine(GreenPen, this->ClientRectangle.Width, this->ClientRectangle.Height / 3 * 2, this->ClientRectangle.Width / 3, this->ClientRectangle.Height);
	}

	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		Refresh();
	}
	};
}
