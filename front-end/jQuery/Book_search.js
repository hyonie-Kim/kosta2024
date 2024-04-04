import { config } from "../config/API_KEY.js";

const KAKAO_API_KEY = config.API_KEY;

$("#submit").click(function () {
  $.ajax({
    url: "https://dapi.kakao.com/v3/search/book?query=" + $("#search").val(),
    method: "GET",
    headers: { Authorization: `KakaoAK ${KAKAO_API_KEY}` },
  }).done(function (data) {
    console.log(data);
    $("body").append("<p><span>" + data.documents[0].title + "</span>");
    $("body").append("<p><img src =" + data.documents[0].thumbnail + "/>");
  });
});
