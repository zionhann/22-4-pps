# 22-4-pps

## 초기설정

0. 저장소 fork 후 clone
```shell
$ git clone https://github.com/<username>/22-4-pps.git
```

1. 자신의 이름으로 폴더 생성후 폴더 안에 리뷰 받을 소스파일을 포함시킨다. 이때 실행파일은 제외한다.

```shell
$ mkdir <이름>
```

## 코드 리뷰(Pull Request)

0. 소스파일 커밋 & 푸시

```shell
$ git add *
```
```shell
$ git commit -m "Week1"
```
```shell
$ git push origin <브랜치 이름>
```

1. 제목은 자신의 이름과 함께 해당 주차 기입, 내용에는 문제 번호를 포함하여 PR 생성 (zionhann/22-4-pps[main] <- username/22-4-pps[main])

![pr-convention](https://user-images.githubusercontent.com/45687157/210139381-53e4d9ad-067a-4a9b-a3e5-befccee99153.png)

2. 코드리뷰는 `PR` 의 `File changed` 탭에서 가능

![code-review](https://user-images.githubusercontent.com/45687157/210139446-22395485-3ebb-4c56-af97-af0960d58208.png)
