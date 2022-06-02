#pragma once

namespace ToDoApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TaskTextBox;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::ListBox^ TasksListBox;
	private: System::Windows::Forms::Label^ label2;
	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TaskTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->TasksListBox = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Task:";
			// 
			// TaskTextBox
			// 
			this->TaskTextBox->Location = System::Drawing::Point(16, 68);
			this->TaskTextBox->Name = L"TaskTextBox";
			this->TaskTextBox->Size = System::Drawing::Size(357, 31);
			this->TaskTextBox->TabIndex = 1;
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(398, 57);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(112, 53);
			this->AddButton->TabIndex = 2;
			this->AddButton->Text = L"ADD";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &MainForm::AddButton_Click);
			// 
			// TasksListBox
			// 
			this->TasksListBox->ForeColor = System::Drawing::Color::Black;
			this->TasksListBox->FormattingEnabled = true;
			this->TasksListBox->ItemHeight = 24;
			this->TasksListBox->Location = System::Drawing::Point(16, 126);
			this->TasksListBox->Name = L"TasksListBox";
			this->TasksListBox->Size = System::Drawing::Size(357, 244);
			this->TasksListBox->TabIndex = 3;
			this->TasksListBox->Click += gcnew System::EventHandler(this, &MainForm::TasksListBox_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(400, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Version 1.0.1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(532, 400);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TasksListBox);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->TaskTextBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(550, 447);
			this->MinimumSize = System::Drawing::Size(550, 447);
			this->Name = L"MainForm";
			this->Text = L"To Do Application";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Storing the Task Value in a variable
		String^ TaskText = TaskTextBox->Text;
		// Storing that information in List Box
		if (TaskText != "") {
			TasksListBox->Items->Add(TaskText);
		}
		TaskTextBox->Text = "";
	}

private: System::Void TasksListBox_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TasksListBox->SelectedIndex != -1) {
		TasksListBox->Items->RemoveAt(TasksListBox->SelectedIndex);
	}
}
};
}
