$project = Split-Path $PSScriptRoot -Parent
$config = Get-Content (Join-Path $project 'config/demo.json') -Raw | ConvertFrom-Json
$config.title
Get-Content (Join-Path $project $config.mascot)
