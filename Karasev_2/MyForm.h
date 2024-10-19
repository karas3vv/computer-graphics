#pragma once

namespace Karasev {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float lines[] = {
		0.5f,3.f,1.f,4.5f, // �� ����� ���� ����� �� ���
		1.f,4.5f,0.5f,6.f, // ����� ��� ����� ����� �����
		0.5f,6.f,0.5f, 7.5f, // ����� ��� �����
		0.5f, 7.5f,1.f,8.f, // ����� ��� ���� �����
		1.f,8.f,1.5f,8.f, // ����� ��� ���� ��������
		1.5f,8.f,2.f,7.5f, // ����� ��� ���� ������
		2.f,7.5f,1.5f, 6.f, // ����� ��� ������ ������ ����
		1.5f, 6.f,1.5f,4.5f, // ����� ��� ������ �� �������
		1.5f,4.5f,3.f,4.5f, // �������
		3.f,4.5f,3.f,6.f, // ������ ��� ����� ����� �����
		3.f,6.f,2.5f,7.5f, // ������ ��� �����
		2.5f,7.5f,3.f,8.f, // ������ ��� ���� �����
		3.f,8.f,3.5f,8.f, // ������ ��� ���� ��������
		3.5f,8.f,4.f,7.5f, // ������ ��� ���� ������
		4.f,7.5f,4.f,6.f, // ������ ��� ������ ����
		4.f,6.f,3.5f,4.5f, // ������ ��� ������
		3.5f,4.5f,4.f,3.f, // �� ������� ��� ���� �� ����
		4.f,3.f,3.5f,1.5f, // ������ �����
		3.5f,1.5f,2.5f,1.f, // ���������� ������
		2.5f,1.f,2.f,1.f, // ���������� �����
		2.f,1.f,1.f,1.5f, // ���������� �����
		1.f,1.5f,0.5f,3.f, // ����� �����
		// ��������
		4.f,3.f,5.5f,3.5f, // ����� �� ������ ������
		5.5f,3.5f,7.f,3.5f, // ����� ����
		7.f,3.5f,7.5f,2.5f, // ����� ������ �� ������
		7.5f,2.5f,8.f,2.5f, // ����� ������
		8.f,2.5f,8.f,2.f, // ����� ������
		8.f,2.f,7.5f,2.f, // ����� ��� ������ ������
		7.5f,2.f,7.5f,0.5f, // ������ ���� ������ ������ ����
		7.5f,0.5f,6.5f,0.5f, // ������ ���� ���
		6.5f,0.5f,6.5f,1.f, // ������ ���� �����
		6.5f,1.f,6.f,1.f, // ����� ������ ���
		6.f,1.f,6.f,0.5f, // ����� ������ ���� ������
		6.f,0.5f,5.f,0.5f, // ����� ������ ���� ���
		5.f,0.5f,5.f,1.f, // ����� ������ ���� �����
		5.f,1.f,4.f,1.f, // ����� ������� � ��������� ������
		4.f,1.f,4.f,0.5f, // ������ �������� ���� ������
		4.f,0.5f,3.f,0.5f, // ������ �������� ���� ���
		3.f,0.5f,3.f,1.f, // ������ �������� ���� �����
		3.f,1.f,2.5f,1.f, // ����� �������� ���
		2.5f,1.f,2.5f,0.5f, // �������� ���� ������
		2.5f,0.5f,1.5f,0.5f, // �������� ���� ���
		1.5f,0.5f,1.5f,1.25f, // �������� ���� �����
		// ����� ����
		1.5f,3.5f,1.5f,3.f, // ����� ���� ����� ������ ����
		1.5f,3.f,2.f,3.f, // ����� ���� ���
		2.f, 3.f,2.f,3.5f, // ����� ���� ������
		2.f,3.5f,1.5f,3.5f, // ����� ���� ����
		// ������ ����
		2.5f,3.5f,2.5f,3.f, // ������ ���� �����
		2.5f,3.f,3.f, 3.f, // ������ ���� �����
		3.f,3.f,3.f,3.5f, // ������ ���� ������
		3.f,3.5f,2.5f,3.5f, // ������ ���� ������
		// ����� ��������
		1.f,5.5f,1.f,7.f, // ����� ����� ��������
		3.5f,5.5f,3.5f,7.f, // ������ ����� ��������
		// ���
		2.f,2.5f,2.5f,2.5f, // ��� ������
		2.5f,2.5f,2.25f,2.f, // ��� ������
		2.25f,2.f,2.f,2.5f // ��� �����
	};

	float lines2[] = {
		// ������ ������� ����
		2.5f,0.5f,2.f,1.f, // �� ����� ����� ������ �����
		2.f,1.f,2.5f,2.f,
		2.5f,2.f,2.f,3.5f,
		2.f,3.5f,2.f,4.5f,
		2.f,4.5f,2.5f,5.5f,
		2.5f,5.5f,3.f,6.f, // ���� ������ ��� � �����
		2.5f,0.5f,3.5f,0.5f, // �� ����� ����� ������ ������
		3.5f,0.5f,4.f,1.f,
		4.f,1.f,3.5f,2.f,
		3.5f,2.f,4.f,3.f, // ����� ������� ������ ����
		// �����
		2.f,3.5f,0.5f,3.5f,
		0.5f,3.5f,2.f,4.f,
		// ������� ������ ����
		4.f,1.f,4.5f,1.f, // �� ������� ������� ������� ������ ����
		4.5f,1.f,5.f,1.5f,
		5.f,1.5f,4.5f,2.f,
		4.5f,2.f,3.5f,2.f, // ���� � ������� ������ �����
		// �������
		4.5f,2.f,6.f,2.5f,
		6.f,2.5f,6.5f,3.f, // ���� � ������� �������� �����
		// ������� �������� ���� 
		6.5f,3.f,6.5f,4.1f,
		5.5f,3.5f,6.75f,4.25f,
		6.5f,3.f,7.f,2.5f, // �� ����� ������ � ����
		7.f,2.5f,8.f,3.f,
		8.f,3.f,8.f,3.5f,
		8.f,3.5f,7.5f,4.5f,
		7.5f,4.5f,6.f,5.f,
		// ������� �������� ����
		6.5f,3.f,7.f,2.f,
		7.f,2.f,6.5f,1.5f,
		6.5f,1.5f,7.f,1.f,
		7.f,1.f,8.f,1.f,
		8.f,1.f,8.5f,1.5f,
		8.5f,1.5f,8.f,2.f,
		8.f,2.f,8.25f,4.25f,
		// ������ ����� ���
		8.f,3.5f,8.5f,5.f,
		// �����
		3.f,6.f,5.f,6.f,
		5.f,6.f,7.f,6.5f,
		// ����� ���
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
		// ������
		7.5f,6.f,7.f,6.5f,
		7.f,6.5f,6.5f,7.5f,
		6.5f,7.5f,7.f,8.5f,
		7.f,8.5f,7.5f,9.f,
		7.5f,9.f,9.5f,9.f,
		9.5f,9.f,10.f,8.5f,
		10.f,8.5f,10.f,8.f,
		10.f,8.f,10.5f,7.5f, // ����� ������� �����
		10.5f,7.5f,10.5f,7.f,
		10.5f,7.f,10.f,6.5f,
		10.f,6.5f,9.5f,7.f,
		9.5f,7.f,9.f,7.f,
		9.f,7.f,8.f,6.f,
		// ����� �����
		7.5f,7.5f,7.5f,8.f,
		7.5f,8.f,8.f,8.5f,
		8.f,8.5f,8.5f,8.5f,
		// ������ �����
		9.5f,8.5f,10.5f,8.5f,
		10.5f,8.5f,11.f,8.f,
		11.f,8.f,11.f,7.5f,
		// ����� ���� 
		8.f,7.f,8.f,7.5f,
		8.f,7.f,7.5f,7.f,
		8.f,7.5f,8.5f,8.f,
		8.5f,8.f,9.f,7.5f,
		9.f,7.5f,8.f,7.f,
		8.f,7.5f,8.5f,7.5f,
		8.5f,7.5f,8.5f,7.25f,
		// ������ ����
		10.f,8.f,9.5f,7.5f,
		9.5f,7.5f,10.f,7.f,
		10.f,7.f,10.5f,7.5f,
		9.5f,7.5f,10.f,7.5f,
		10.f,7.5f,10.f,7.f,
		// ������ ���
		9.5f,9.f,13.5f,10.f, // ������� ����� ���
		10.f,8.5f,13.5f,10.f, // ���������� ����� ���
		13.5f,10.f,13.5f,10.f,
		13.5f,10.f,14.f,9.5f,
		14.f,9.5f,14.f,8.f,
		14.f,8.f,12.f,6.5f,
		12.f,6.5f,10.f,5.5f,
		10.f,5.5f,9.5f,6.f,
		9.5f,6.f,9.5f,6.5f,
		// �����
		9.5f,6.f,9.5f,5.5f,
		9.5f,5.5f,10.f,4.5f,
		10.f,4.5f,10.5f,4.f,
		10.5f,4.f,11.f,4.f,
		11.f,4.f,11.5f,4.5f,
		11.5f,4.5f,12.5f,4.f,
		12.5f,4.f,11.5f,3.f,
		11.5f,3.f,10.5f,3.f,
		10.5f,3.f,8.f,5.5f,
		9.5f,5.5f,9.f,5.f, // ������� ����� (������)
		10.f,4.5f,9.5f,4.f, // ������ �����
		10.5f,4.f,10.5f,3.f, // ������ �����
		11.f,4.f,11.5f,3.f, // ��������� �����
		// ������ (��� �� �����)
		11.5f,4.5f,11.5f,6.f, // ������ �����
		11.5f,6.f,12.f,5.5f,
		12.f,5.5f,11.5f,4.5f,
		12.f,5.f,12.f,6.f, // ������ �����
		12.f,6.f,12.5f,6.f,
		12.5f,6.f,12.f,5.f,
		12.5f,5.5f,13.f,6.5f, // ������ �����
		13.f,6.5f,13.5f,6.5f,
		13.5f,6.5f,13.5f,6.f,
		13.5f,6.f,12.5f,5.5f,
		12.5f,4.5f,13.5f,5.5f, // ��������� �����
		13.5f,5.5f,13.5f,5.f,
		13.5f,5.f,12.5f,4.5f
	};

	unsigned int arrayLength = sizeof(lines) / sizeof(float);
	unsigned int arrayLength2 = sizeof(lines2) / sizeof(float);
	float Vx = 8.5f; // ������ ������� �� �����������
	float Vy = 8.5f; // ������ ������� �� ���������
	float Vx1 = 14.5f;
	float Vy1 = 10.5f;
	float aspectFig = Vx / Vy; // ����������� ������ �������
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
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
	private: bool keepAspectRatio; // �������� - ��������� �� ����������� ������ �������?
	private:bool changePicture;
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->Clear(Color::AliceBlue);

		Pen^ BlackPen = gcnew Pen(Color::Black, 2);

		float Wx = ClientRectangle.Width; // ������ ���� �� �����������
		float Wy = ClientRectangle.Height; // ������ ���� �� ���������
		float Wx1 = ClientRectangle.Width;
		float Wy1 = ClientRectangle.Height;

		
		float aspectForm = Wx / Wy; // ����������� ������ ���� ���������
		float aspectForm1 = Wx1 / Wy1;
		float Sx, Sy, Sx1, Sy1;
		if (keepAspectRatio) {
			// �����������s ���������� ��� ���������� ��������� ����������� ������
			Sx = Sy = aspectFig < aspectForm ? Wy / Vy : Wx / Vx;
			Sx1 = Sy1 = aspectFig1 < aspectForm1 ? Wy1 / Vy1 : Wx1 / Vx1;
		}
		else {
			Sx = Wx / Vx; // ����������� ���������� �� ��� Ox
			Sy = Wy / Vy; // ����������� ���������� �� ��� Oy
			Sx1 = Wx1 / Vx1;
			Sy1 = Wy1 / Vy1;
		}
		float Ty = Sy * Vy; // �������� � ������������� ������� �� ��� Oy ����� ����� �����
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
		keepAspectRatio = true; // ��������� ��������: ��������� ����������� ������ �������
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
