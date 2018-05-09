#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAdicionarNovaEquipe
	/// </summary>
	public ref class TelaAdicionarNovaEquipe : public System::Windows::Forms::Form
	{
	public:
		TelaAdicionarNovaEquipe(void)
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
		~TelaAdicionarNovaEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_nomeDaEquipe;
	private: System::Windows::Forms::TextBox^  tb_númeroDeProfissionais;
	private: System::Windows::Forms::TextBox^  tb_custoPorHora;
	protected:



	private: System::Windows::Forms::Label^  lb_nomeDaEquipe;
	private: System::Windows::Forms::Label^  lb_númeroDeProfissionais;
	private: System::Windows::Forms::Label^  lb_custoPorHora;



	private: System::Windows::Forms::Label^  lb_adicionarNovaEquipe;
	private: System::Windows::Forms::Button^  bt_cancelar;


	private: System::Windows::Forms::Button^  bt_finalizar;


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
			this->tb_nomeDaEquipe = (gcnew System::Windows::Forms::TextBox());
			this->tb_númeroDeProfissionais = (gcnew System::Windows::Forms::TextBox());
			this->tb_custoPorHora = (gcnew System::Windows::Forms::TextBox());
			this->lb_nomeDaEquipe = (gcnew System::Windows::Forms::Label());
			this->lb_númeroDeProfissionais = (gcnew System::Windows::Forms::Label());
			this->lb_custoPorHora = (gcnew System::Windows::Forms::Label());
			this->lb_adicionarNovaEquipe = (gcnew System::Windows::Forms::Label());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->bt_finalizar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_nomeDaEquipe
			// 
			this->tb_nomeDaEquipe->Location = System::Drawing::Point(144, 67);
			this->tb_nomeDaEquipe->MaxLength = 20;
			this->tb_nomeDaEquipe->Name = L"tb_nomeDaEquipe";
			this->tb_nomeDaEquipe->Size = System::Drawing::Size(99, 20);
			this->tb_nomeDaEquipe->TabIndex = 0;
			// 
			// tb_númeroDeProfissionais
			// 
			this->tb_númeroDeProfissionais->Location = System::Drawing::Point(144, 107);
			this->tb_númeroDeProfissionais->Name = L"tb_númeroDeProfissionais";
			this->tb_númeroDeProfissionais->Size = System::Drawing::Size(99, 20);
			this->tb_númeroDeProfissionais->TabIndex = 1;
			// 
			// tb_custoPorHora
			// 
			this->tb_custoPorHora->Location = System::Drawing::Point(144, 148);
			this->tb_custoPorHora->Name = L"tb_custoPorHora";
			this->tb_custoPorHora->Size = System::Drawing::Size(99, 20);
			this->tb_custoPorHora->TabIndex = 2;
			// 
			// lb_nomeDaEquipe
			// 
			this->lb_nomeDaEquipe->AutoSize = true;
			this->lb_nomeDaEquipe->Location = System::Drawing::Point(49, 70);
			this->lb_nomeDaEquipe->Name = L"lb_nomeDaEquipe";
			this->lb_nomeDaEquipe->Size = System::Drawing::Size(89, 13);
			this->lb_nomeDaEquipe->TabIndex = 3;
			this->lb_nomeDaEquipe->Text = L"Nome da Equipe:";
			this->lb_nomeDaEquipe->Click += gcnew System::EventHandler(this, &TelaAdicionarNovaEquipe::label1_Click);
			// 
			// lb_númeroDeProfissionais
			// 
			this->lb_númeroDeProfissionais->AutoSize = true;
			this->lb_númeroDeProfissionais->Location = System::Drawing::Point(15, 110);
			this->lb_númeroDeProfissionais->Name = L"lb_númeroDeProfissionais";
			this->lb_númeroDeProfissionais->Size = System::Drawing::Size(123, 13);
			this->lb_númeroDeProfissionais->TabIndex = 4;
			this->lb_númeroDeProfissionais->Text = L"Número de Profissionais:";
			// 
			// lb_custoPorHora
			// 
			this->lb_custoPorHora->AutoSize = true;
			this->lb_custoPorHora->Location = System::Drawing::Point(59, 151);
			this->lb_custoPorHora->Name = L"lb_custoPorHora";
			this->lb_custoPorHora->Size = System::Drawing::Size(79, 13);
			this->lb_custoPorHora->TabIndex = 5;
			this->lb_custoPorHora->Text = L"Custo por hora:";
			this->lb_custoPorHora->Click += gcnew System::EventHandler(this, &TelaAdicionarNovaEquipe::label3_Click);
			// 
			// lb_adicionarNovaEquipe
			// 
			this->lb_adicionarNovaEquipe->AutoSize = true;
			this->lb_adicionarNovaEquipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_adicionarNovaEquipe->Location = System::Drawing::Point(68, 20);
			this->lb_adicionarNovaEquipe->Name = L"lb_adicionarNovaEquipe";
			this->lb_adicionarNovaEquipe->Size = System::Drawing::Size(149, 17);
			this->lb_adicionarNovaEquipe->TabIndex = 8;
			this->lb_adicionarNovaEquipe->Text = L"Adicionar nova equipe";
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->Location = System::Drawing::Point(43, 207);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(65, 23);
			this->bt_cancelar->TabIndex = 9;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = true;
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->Location = System::Drawing::Point(178, 207);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(65, 23);
			this->bt_finalizar->TabIndex = 10;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = true;
			// 
			// TelaAdicionarNovaEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->bt_finalizar);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->lb_adicionarNovaEquipe);
			this->Controls->Add(this->lb_custoPorHora);
			this->Controls->Add(this->lb_númeroDeProfissionais);
			this->Controls->Add(this->lb_nomeDaEquipe);
			this->Controls->Add(this->tb_custoPorHora);
			this->Controls->Add(this->tb_númeroDeProfissionais);
			this->Controls->Add(this->tb_nomeDaEquipe);
			this->Name = L"TelaAdicionarNovaEquipe";
			this->Text = L"TelaAdicionarNovaEquipe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
};
}
