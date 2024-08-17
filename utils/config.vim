call plug#begin('~/.vim/plugged')
" Aqui vão os pluggins
	
" Plugin de Exemplo inicial
Plug 'terroo/vim-simple-emoji'
Plug 'matsuuu/pinkmare'
Plug 'ycm-core/YouCompleteMe'
Plug 'jiangmiao/auto-pairs'
Plug 'SirVer/ultisnips'
Plug 'honza/vim-snippets'
Plug 'ervandew/supertab'
Plug 'puremourning/vimspector'
Plug 'preservim/nerdtree'
Plug 'tpope/vim-vinegar'
call plug#end()

" Set colorscheme after plugins are loaded
colorscheme morning
set nu!
set mouse=a
set title
set cursorline
set tabstop=2       " Define o número de colunas que um tab ocupa
set shiftwidth=2    " Define o número de espaços para indentação
set expandtab       " Converte tabs em espaços
set encoding=utf-8 " Importante para o YCM	
map q :quit<CR>
map <C-s> :write<CR> "echo 'stty -ixon' >> ~/.bashrc && exec $SHELL'

nnoremap <C-s> :w<CR>
inoremap <C-s> <Esc>:w<CR>a
vnoremap <C-s> <Esc>:w<CR>gv
nnoremap <C-n> :NERDTreeToggle<CR>

syntax on
filetype plugin indent on

let g:ycm_language_server = [
  \ {
  \   'name': 'ccls',
  \   'cmdline': [ 'ccls' ],
  \   'filetypes': [ 'c', 'cpp', 'cuda', 'objc', 'objcpp' ],
  \   'project_root_files': [ '.ccls-root', 'compile_commands.json' ]
  \ },
  \ {
  \   'name': 'tern_for_vim',
  \   'cmdline': [ 'tern' ],
  \   'filetypes': [ 'javascript', 'javascript.jsx', 'typescript', 'typescript.tsx' ],
  \   'project_root_files': [ '.tern-project' ]
  \ }
  \ ]
let g:ycm_show_diagnostics_ui = 1
let g:ycm_key_list_select_completion = ['<C-n>', '<Down>']
let g:ycm_key_list_previous_completion = ['<C-p>', '<Up>']
let g:SuperTabDefaultCompletionType = '<C-n>'
let g:UltiSnipsExpandTrigger = "<tab>"
let g:UltiSnipsJumpForwardTrigger = "<tab>"
let g:UltiSnipsJumpBackwardTrigger = "<s-tab>"
let g:airline_left_sep = ''
let g:airline_left_alt_sep = ''
let g:airline_right_sep = ''
let g:airline_right_alt_sep = ''
let g:airline_symbols = {}
let g:airline_symbols.branch = ''
let g:airline_symbols.readonly = ''
let g:airline_symbols.linenr = '☰ '
let g:airline_symbols.maxlinenr = '  '
let g:airline_symbols.dirty='⚡'
let g:vimspector_enable_mappings = 'HUMAN'
