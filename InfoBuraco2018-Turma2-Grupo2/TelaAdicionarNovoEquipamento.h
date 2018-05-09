#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAdicionarNovoEquipamento
	/// </summary>
	public ref class TelaAdicionarNovoEquipamento : public System::Windows::Forms::Form
	{
	public:
		TelaAdicionarNovoEquipamento(void)
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
		~TelaAdicionarNovoEquipamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_identificação;
	private: System::Windows::Forms::TextBox^  tb_custoDeUso;
	protected:


	private: System::Windows::Forms::Label^  bt_identificação;
	private: System::Windows::Forms::Label^  bt_custoDeUso;
	private: System::Windows::Forms::Button^  bt_cancelar;
	private: System::Windows::Forms::Button^  bt_confirmar;
	private: System::Windows::Forms::Label^  lb_adicionarNovoEquipamento;

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
			this->tb_identificação = (gcnew System::Windows::Forms::TextBox());
			this->tb_custoDeUso = (gcnew System::Windows::Forms::TextBox());
			this->bt_identificação = (gcnew System::Windows::Forms::Label());
			this->bt_custoDeUso = (gcnew System::Windows::Forms::Label());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->bt_confirmar = (gcnew System::Windows::Forms::Button());
			this->lb_adicionarNovoEquipamento = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tb_identificação
			// 
			this->tb_identificação->Location = System::Drawing::Point(104, 66);
			this->tb_identificação->MaxLength = 5;
			this->tb_identificação->Name = L"tb_identificação";
			this->tb_identificação->Size = System::Drawing::Size(91, 20);
			this->tb_identificação->TabIndex = 0;
			// 
			// tb_custoDeUso
			// 
			this->tb_custoDeUso->Location = System::Drawing::Point(104, 116);
			this->tb_custoDeUso->Name = L"tb_custoDeUso";
			this->tb_custoDeUso->Size = System::Drawing::Size(91, 20);
			this->tb_custoDeUso->TabIndex = 1;
			// 
			// bt_identificação
			// 
			this->bt_identificação->AutoSize = true;
			this->bt_identificação->Location = System::Drawing::Point(27, 69);
			this->bt_identificação->Name = L"bt_identificação";
			this->bt_identificação->Size = System::Drawing::Size(71, 13);
			this->bt_identificação->TabIndex = 2;
			this->bt_identificação->Text = L"Identificação:";
			// 
			// bt_custoDeUso
			// 
			this->bt_custoDeUso->AutoSize = true;
			this->bt_custoDeUso->Location = System::Drawing::Point(24, 119);
			this->bt_custoDeUso->Name = L"bt_custoDeUso";
			this->bt_custoDeUso->Size = System::Drawing::Size(74, 13);
			this->bt_custoDeUso->TabIndex = 3;
			this->bt_custoDeUso->Text = L"Custo de Uso:";
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->Location = System::Drawing::Point(33, 168);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(88, 25);
			this->bt_cancelar->TabIndex = 4;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = true;
			this->bt_cancelar->Click += gcnew System::EventHandler(this, &TelaAdicionarNovoEquipamento::bt_cancelar_Click);
			// 
			// bt_confirmar
			// 
			this->bt_confirmar->Location = System::Drawing::Point(159, 168);
			this->bt_confirmar->Name = L"bt_confirmar";
			this->bt_confirmar->Size = System::Drawing::Size(88, 25);
			this->bt_confirmar->TabIndex = 5;
			this->bt_confirmar->Text = L"Confirmar";
			this->bt_confirmar->UseVisualStyleBackColor = true;
			// 
			// lb_adicionarNovoEquipamento
			// 
			this->lb_adicionarNovoEquipamento->AutoSize = true;
			this->lb_adicionarNovoEquipamento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_adicionarNovoEquipamento->Location = System::Drawing::Point(47, 20);
			this->lb_adicionarNovoEquipamento->Name = L"lb_adicionarNovoEquipamento";
			this->lb_adicionarNovoEquipamento->Size = System::Drawing::Size(191, 17);
			this->lb_adicionarNovoEquipamento->TabIndex = 6;
			this->lb_adicionarNovoEquipamento->Text = L"Adicionar Novo Equipamento";
			// 
			// TelaAdicionarNovoEquipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 240);
			this->Controls->Add(this->lb_adicionarNovoEquipamento);
			this->Controls->Add(this->bt_confirmar);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->bt_custoDeUso);
			this->Controls->Add(this->bt_identificação);
			this->Controls->Add(this->tb_custoDeUso);
			this->Controls->Add(this->tb_identificação);
			this->Name = L"TelaAdicionarNovoEquipamento";
			this->Text = L"TelaAdicionarNovoEquipamento";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_cancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
