namespace _03
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
            this.add = new System.Windows.Forms.Button();
            this.firstvalue = new System.Windows.Forms.TextBox();
            this.secondvalue = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.resultvalue = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.sub = new System.Windows.Forms.Button();
            this.mul = new System.Windows.Forms.Button();
            this.div = new System.Windows.Forms.Button();
            this.mod = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 31);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(61, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "첫 번째 값";
            // 
            // add
            // 
            this.add.Location = new System.Drawing.Point(14, 189);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(20, 23);
            this.add.TabIndex = 1;
            this.add.Text = "+";
            this.add.UseVisualStyleBackColor = true;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // firstvalue
            // 
            this.firstvalue.Location = new System.Drawing.Point(122, 28);
            this.firstvalue.Name = "firstvalue";
            this.firstvalue.Size = new System.Drawing.Size(100, 21);
            this.firstvalue.TabIndex = 2;
            // 
            // secondvalue
            // 
            this.secondvalue.Location = new System.Drawing.Point(122, 75);
            this.secondvalue.Name = "secondvalue";
            this.secondvalue.Size = new System.Drawing.Size(100, 21);
            this.secondvalue.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 78);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(61, 12);
            this.label2.TabIndex = 3;
            this.label2.Text = "두 번째 값";
            // 
            // resultvalue
            // 
            this.resultvalue.Location = new System.Drawing.Point(122, 129);
            this.resultvalue.Name = "resultvalue";
            this.resultvalue.Size = new System.Drawing.Size(100, 21);
            this.resultvalue.TabIndex = 6;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 132);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(45, 12);
            this.label3.TabIndex = 5;
            this.label3.Text = "결과 값";
            // 
            // sub
            // 
            this.sub.Location = new System.Drawing.Point(62, 189);
            this.sub.Name = "sub";
            this.sub.Size = new System.Drawing.Size(20, 23);
            this.sub.TabIndex = 7;
            this.sub.Text = "-";
            this.sub.UseVisualStyleBackColor = true;
            this.sub.Click += new System.EventHandler(this.sub_Click);
            // 
            // mul
            // 
            this.mul.Location = new System.Drawing.Point(109, 189);
            this.mul.Name = "mul";
            this.mul.Size = new System.Drawing.Size(20, 23);
            this.mul.TabIndex = 8;
            this.mul.Text = "*";
            this.mul.UseVisualStyleBackColor = true;
            this.mul.Click += new System.EventHandler(this.mul_Click);
            // 
            // div
            // 
            this.div.Location = new System.Drawing.Point(157, 189);
            this.div.Name = "div";
            this.div.Size = new System.Drawing.Size(20, 23);
            this.div.TabIndex = 9;
            this.div.Text = "/";
            this.div.UseVisualStyleBackColor = true;
            this.div.Click += new System.EventHandler(this.div_Click);
            // 
            // mod
            // 
            this.mod.Location = new System.Drawing.Point(202, 189);
            this.mod.Name = "mod";
            this.mod.Size = new System.Drawing.Size(20, 23);
            this.mod.TabIndex = 10;
            this.mod.Text = "%";
            this.mod.UseVisualStyleBackColor = true;
            this.mod.Click += new System.EventHandler(this.mod_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(280, 244);
            this.Controls.Add(this.mod);
            this.Controls.Add(this.div);
            this.Controls.Add(this.mul);
            this.Controls.Add(this.sub);
            this.Controls.Add(this.resultvalue);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.secondvalue);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.firstvalue);
            this.Controls.Add(this.add);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.TextBox firstvalue;
        private System.Windows.Forms.TextBox secondvalue;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox resultvalue;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button sub;
        private System.Windows.Forms.Button mul;
        private System.Windows.Forms.Button div;
        private System.Windows.Forms.Button mod;
    }
}

