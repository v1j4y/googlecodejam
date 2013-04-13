! Problem A: Speaking in Tongues

    Program PA

        implicit none
        integer I,J,K,L,M
        integer T
        integer CHR
        character STR
        character STRING*100
        character, dimension(100) :: INPUT
        integer, dimension(100) :: INPUTINDEX
        character(100) :: OUTPUT

!       character, dimension(26) :: DICT /'yhesocvxduiglbkrztnwjpfmaq'/
        character, dimension(26) :: DICT
        integer, allocatable :: INDEXARRAY(:)
        allocate (INDEXARRAY(26))
        DICT(1)='y'
        DICT(2)='h'
        DICT(3)='e'
        DICT(4)='s'
        DICT(5)='o'
        DICT(6)='c'
        DICT(7)='v'
        DICT(8)='x'
        DICT(9)='d'
        DICT(10)='u'
        DICT(11)='i'
        DICT(12)='g'
        DICT(13)='l'
        DICT(14)='b'
        DICT(15)='k'
        DICT(16)='r'
        DICT(17)='z'
        DICT(18)='t'
        DICT(19)='n'
        DICT(20)='w'
        DICT(21)='j'
        DICT(22)='p'
        DICT(23)='f'
        DICT(24)='m'
        DICT(25)='a'
        DICT(26)='q'
        open(unit=10,file='input.dat',status='old')
        open(unit=11,file='output.dat',status='new')

        read(10,'(I)')T
        
        do I=1,T
           read(10,'(A)')STRING
           write(6,*)STRING
        K=0
        do L=1,len(STRING)
            INPUT(L)=STRING(L:L)
            K=K+1
!           if(INPUT(L).eq.'\n') exit
            if(INPUT(L).eq.' '.and.INPUT(L-1).eq.' ') exit
        end do
        INPUTINDEX(I)=K
           write(6,*)k

           if(i.le.9)then
           write(11,'(A,I1.1,A)',advance='no')'Case #',i,': '
           else
           write(11,'(A,I2.2,A)',advance='no')'Case #',i,': '
           endif

        do M=1,k
            CHR=ICHAR(INPUT(M))
            if(CHR.ge.97 .and. CHR.le.122)then
                CHR=CHR-96
                write(11,'(A)',advance='no') DICT(CHR)
            else if (ICHAR(INPUT(M)).eq.32 .and. ICHAR(INPUT(M+1)).eq.32)then
                write(11,*)
            else if (ICHAR(INPUT(M-1)).eq.32 .and. ICHAR(INPUT(M)).eq.32)then
                cycle
            else
                write(11,'(A)',advance='no') INPUT(M)
            endif
        end do
        if(k.eq.100)then
            write(11,*)
        endif

        end do

    end


