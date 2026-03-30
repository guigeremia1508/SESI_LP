# SESI_LP
Disciplina de lógica de Programacao da turma do SESI de 2026

#  Comandos básicos do Git Bash

Este repositório contém alguns comandos essenciais para usar no Git Bash.

---

##  Configuração inicial

```bash
git config --global user.name "Seu Nome"
```
```bash
git config --global user.email "seuemail@email.com"
```
```bash
git confi --list
```

---

## Criar e acessar repositório

```bash
git init
```
```bash
git clone https://github.com/usuario/repositorio.git
```
```bash
cd nome-da-pasta
```
---

## Adicionar e salvar alterações

```bash
git status
```
```bash
git add 
```
```bash
git add nome-do-arquivo
```
```bash
git commit -m "mensagem do commit"
```
---

## Enviar para o GitHub
```bash
git remote add origin https://github.com/usuario/repositorio.git
```
```bash
git branch -M main
```

```bash
git push -u origin main
```
---

## Atualizar repositório

```bash
git pull
```
```bash
git fetch
```
---

## Trabalhando com branches

```bash
git branch
```
```bash
git checkout -b nova-branch
```
```bash
git checkout nome-da-branch
```
```bash
git merge nome-da-branch
```
---

## Desfazer alterações

```bash
git restore nome-do-arquivo
```
```bash
git reset
```
```bash
git reset --hard
```
---

## Ver histórico

```bash
git log
```
```bash
git log --oneline
```
