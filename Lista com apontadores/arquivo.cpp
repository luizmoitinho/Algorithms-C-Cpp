UNIT UNIT_LISTA_APONTADOR;

INTERFACE
    Uses CRT;
    type
       Apontador = ^NodoLista;

       TInfo = record
                  Chave : integer;
                  { outros componentes }
                end;

       NodoLista = Record
                      Item : TInfo;
                      Proximo : Apontador;
                   end;

       TLista = record
                    Primeiro : Apontador;
                    Ultimo   : Apontador;
                end;

       procedure Cria    (var Lista : TLista);
       function  Vazia   (Lista : TLista) : Boolean;
       procedure InsereInicio (var Lista : TLista; x : TInfo);
       procedure InserePosicao(var Lista : TLista; p : integer; x : TInfo);
       procedure InsereFinal  (var Lista : TLista; x : TInfo);
       procedure RemoveInicio  (var Lista:TLista);
       procedure RemoveFinal   (var Lista:TLista);
       procedure Pesquisa_Remove (var Lista : TLista; Item : TInfo );
       procedure Imprime (Lista:TLista);

IMPLEMENTATION

procedure Cria (var Lista : TLista);
begin
    new(Lista.Primeiro);
    Lista.Ultimo := Lista.Primeiro;
    Lista.Primeiro^.Proximo := nil;
end;

function Vazia (Lista : TLista) : Boolean;
begin
      Vazia := Lista.Primeiro = Lista.Ultimo;
end;

procedure InsereInicio (var Lista : TLista; x : TInfo);
var
   p : Apontador;
begin
   new(p);
   p^.item := x;
   p^.proximo := Lista.Primeiro^.Proximo;
   Lista.Primeiro^.Proximo := p;
   if p^.Proximo = nil then Lista.Ultimo := p;
end;

procedure InserePosicao (var Lista : TLista; p : integer; x : TInfo);
          var
    ptr,Aux : Apontador;
    i : integer;
begin
    if (p = 1) then
       InsereInicio(Lista, x)
    else
    begin
       i := 1;
       aux := Lista.Primeiro^.Proximo;
       while (i < p-1) and (aux <> nil) do
       begin
           inc(i);
           aux := aux^.proximo
       end;

       if (aux = nil) then
           writeln('Erro : Posicao nao existe')
       else begin
            new(ptr);
            ptr^.item := x;
            ptr^.proximo := aux^.proximo;
            aux^.proximo := ptr;
       end;
    end;
end;

procedure InsereFinal (var Lista : TLista; x : TInfo);
begin
      New(Lista.Ultimo^.Proximo);
      Lista.Ultimo := Lista.Ultimo^.Proximo;
      Lista.Ultimo^.item := x;
      Lista.Ultimo^.proximo := nil;
end;

procedure RemoveInicio (var Lista:TLista);
var p : Apontador;
begin
       if Vazia(Lista) then
          Writeln('Lista Vazia')
       else
       begin
          p := Lista.Primeiro^.Proximo;
          writeln('Elemento Removido = ',p^.Item.Chave);
          Lista.Primeiro^.Proximo := p^.proximo;
          if Lista.Primeiro^.Proximo = nil then
             Lista.Ultimo := Lista.Primeiro;
          dispose(p);
       end;
end;


procedure RemovePosicao(var Lista : TLista; p : Apontador; var Item : TInfo);
var
   q : Apontador;
begin
   if (Vazia(Lista)) or (p = nil) or (p^.Proximo = nil) then
      writeln('Erro : Lista vazia ou posicao nao existe')
   else
   begin
      q := p^.Proximo;
      Item := q^.Item;
      p^.Proximo := q^.Proximo;
      if p^.Proximo = nil then Lista.Ultimo := p;
      dispose(q);
   end;
end;


procedure RemoveFinal (var Lista:TLista);
var p,Aux : Apontador;
begin
      if Vazia(Lista) then
         Writeln('Lista Vazia')
      else
      begin
         p := Lista.Primeiro^.Proximo;
         if p^.proximo = nil then
         begin
            Lista.Primeiro^.Proximo := nil;
            Lista.Ultimo := Lista.Primeiro;
         end
         else begin
            while (p^.proximo <> nil) do
            begin
                  aux := p;
                  p:=p^.proximo;
            end;
            aux^.proximo := nil;
            Lista.Ultimo := aux;
         end;
         writeln('Elemento Removido = ',p^.Item.Chave);
         dispose(p);
      end;
end;

procedure Pesquisa_Remove (var Lista : TLista; Item : TInfo );
var
   aux, ptr : Apontador;
   elem : TInfo;
begin
   if Vazia(Lista) then
      writeln('Lista vazia')
   else
   begin

      aux := Lista.Primeiro;
      ptr := aux^.proximo;

      while (ptr^.item.chave <> item.chave) and (ptr^.proximo <> nil) do
      begin
          aux := ptr;
          ptr := aux^.proximo;
      end;

      if (ptr^.item.chave = item.chave) then
      begin
         RemovePosicao(Lista,aux,elem);
         writeln('Elemento Removido = ',elem.chave);
      end
      else
         writeln('Elemento nao encontrado');

   end;
end;

procedure Imprime (Lista:TLista);
var
   aux : Apontador;
begin
   write('[');
   aux := Lista.Primeiro^.Proximo;
   while (aux <> nil) do
   begin
       write(aux^.Item.Chave,' ');
       aux := aux^.proximo;
   end;
   write(']');
end;

END.
