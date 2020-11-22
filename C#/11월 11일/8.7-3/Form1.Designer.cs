namespace _8._7_3
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.decimalvalue = new System.Windows.Forms.TextBox();
            this.binaryvalue = new System.Windows.Forms.TextBox();
            this.convertbtn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(31, 33);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(207, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "2진수로 변환할 10진수를 입력하시오.";
            // 
            // decimalvalue
            // 
            this.decimalvalue.Location = new System.Drawing.Point(33, 60);
            this.decimalvalue.Name = "decimalvalue";
            this.decimalvalue.Size = new System.Drawing.Size(124, 21);
            this.decimalvalue.TabIndex = 1;
            this.decimalvalue.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            this.decimalvalue.TextChanged += new System.EventHandler(this.decimalvalue_TextChanged);
            // 
            // binaryvalue
            // 
            this.binaryvalue.Location = new System.Drawing.Point(33, 103);
            this.binaryvalue.Name = "binaryvalue";
            this.binaryvalue.Size = new System.Drawing.Size(205, 21);
            this.binaryvalue.TabIndex = 1;
            this.binaryvalue.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            this.binaryvalue.TextChanged += new System.EventHandler(this.binaryvalue_TextChanged);
            // 
            // convertbtn
            // 
            this.convertbtn.Location = new System.Drawing.Point(163, 58);
            this.convertbtn.Name = "convertbtn";
            this.convertbtn.Size = new System.Drawing.Size(75, 23);
            this.convertbtn.TabIndex = 2;
            this.convertbtn.Text = "변환";
            this.convertbtn.UseVisualStyleBackColor = true;
            this.convertbtn.Click += new System.EventHandler(this.convertbtn_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(265, 158);
            this.Controls.Add(this.convertbtn);
            this.Controls.Add(this.binaryvalue);
            this.Controls.Add(this.decimalvalue);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "DecimalToBinary";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox decimalvalue;
        private System.Windows.Forms.TextBox binaryvalue;
        private System.Windows.Forms.Button convertbtn;
    }
}

