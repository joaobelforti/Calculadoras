{
Pascal Calculator: 
Use z para zerar o resultado e começar uma nova operação
Digite '$' para finalizar o programa
}


program calculator;
Uses sysutils;
var
n1,n2:real;
stt:integer;
operation:string;
begin
    stt:=0;
    operation:='';
    while(operation<>'$')do
    begin
    if(stt=0)then
    begin
      Writeln ('Digite um valor: ');
      Readln(n1);
    end;
      Writeln('Digite a operação: ');
      Readln(operation);
    if(operation='$')then
    begin
        break;
    end;
    if(operation<>'z')then
    begin
      Writeln('Digite um valor: ');
      Readln(n2);
      stt:=1;
    end
    else if(operation='z')then
    begin
        n1:=0;
        stt:=0;
    end;
    if(operation='*')then
        begin
            n1:=n1*n2;
        end
    else if(operation='+')then
        begin
            n1:=n1+n2;
        end
    else if(operation='-')then
        begin
            n1:=n1-n2;
        end
    else if(operation='/')then
        begin
            n1:=n1/n2;
        end
    else if(operation='z')then
        begin
            Writeln('Resultado zerado');
        end
    else
        Writeln('Operação não encontrada.');
    Writeln('Resultado = ',n1:0:4);
  end;
end.

